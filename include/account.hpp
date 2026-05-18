#include <string>

enum class Currency { RUB, EUR, USD };

class Account {
 private:
  std::string m_id;
  std::string m_userId;
  Currency m_currency;

 public:
  Account() = default;
  Account(const std::string& p_id, const std::string& p_userId,
          Currency p_currency)
      : m_id(p_id), m_userId(p_userId), m_currency(p_currency) {}

  std::string getId() const;
  std::string getUserId() const;
  Currency getCurrency() const;
};