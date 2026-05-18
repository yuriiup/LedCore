#include "posting.hpp"

Posting::Posting(const std::string& p_accountId, long long p_amount)
    : m_accountId(p_accountId), m_amount(p_amount) {}

std::string Posting::getAccountId() const {
  return m_accountId;
}

long long Posting::getAmount() const {
  return m_amount;
}
