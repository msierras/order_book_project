#include <iostream>
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <limits>
#include <string>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstdint>
#include <unordered_map>
#include <memory>
#include <variant>
#include <optional>
#include <tuple>
#include <format>

// Creating enum that will allow us to differentiate based off order type
enum class OrderType
{
    GoodTillCancel,
    FillAndKill
};

enum class Side
{
    Buy,
    Sell
};

// Aliasing simple types to make code more readable and clear
using Price = std::int32_t; // Is signed because a price can be negative
using Quantity = std::uint32_t; // Is unsigned because a quantity can't be negative
using OrderId = std::uint64_t; // Is unsigned because we don't want a negative id

// An order book is made up of levels and these levels are made up of price and quantity
struct LevelInfo
{
    Price price_;
    Quantity quantity_;
};

using LevelInfos = std::vector<LevelInfo>;

class OrderbookLevelInfos
{
public:
    OrderbookLevelInfos( const LevelInfos& bids, const LevelInfos& asks )
        // Uniform initialization
        : bids_{ bids }, asks_{ asks } {}

    // Trailing const (after the method name) means the method won't modify any member variables.
    // It can be called on a const instance of the class
    const LevelInfos& GetBids() const { return bids_; }
    const LevelInfos& GetAsks() const { return asks_; }

private:
    LevelInfos bids_;
    LevelInfos asks_;
};


int main(){





    return 0;
}