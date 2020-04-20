#pragma once

#include "Character.h"
#include "Misc/Direction.h"
#include <string>

namespace Entities
{

class Player : public Character
{
public:
    /**
     * @brief Constructor
     * 
     * @param name name
     * @param description description (default: empty)
     * @param icon icon (default: set to first character of name)
     * @param isBlocking blocking attribute (default: true)
     */
    Player(const std::string& name,
           const std::string& description = "",
           char icon = 0,
           bool isBlocking = true);

    /**
     * @brief Set the direction of the last move
     * 
     * @param dir direction
     */
    void SetLastMoveDirection(Direction dir);

private:
};

} /* namespace Entities */