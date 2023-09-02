#include <exception>
#include <string>

class fractionException : public std::exception
{
public:
    fractionException(const std::string& message) : msg(message) {}
    const char* what() const noexcept override {
        return msg.c_str();
    }
private:
    std::string msg;
};

