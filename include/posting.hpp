#include <string>

class Posting {
 private:
  std::string m_accountId;
  long long m_amount;
 public:
  Posting() = default;
  Posting(const std::string& p_accountId, long long p_amount) : m_accountId(p_accountId), m_amount(p_amount) {};
  std::string getAccountId() const;
  long long getAmount() const;
};