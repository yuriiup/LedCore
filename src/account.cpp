#include "account.hpp"

Account::Account(const std::string& p_id, const std::string& p_userId,
                 Currency p_currency)
    : m_id(p_id), m_userId(p_userId), m_currency(p_currency) {}

std::string Account::getId() const {
  return m_id;
}

std::string Account::getUserId() const {
  return m_userId;
}

Currency Account::getCurrency() const {
  return m_currency;
}