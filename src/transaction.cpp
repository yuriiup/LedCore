#include "transaction.hpp"

Transaction::Transaction(const std::string& p_id,
                         const std::string& p_description,
                         const std::string& p_start,
                         const std::vector<Posting>& p_postings)
    : m_id(p_id),
      m_description(p_description),
      m_start(p_start),
      m_postings(p_postings) {};
std::string Transaction::getId() const {
  return m_id;
}

std::string Transaction::getDescription() const {
  return m_description;
}

std::string Transaction::getStart() const {
  return m_start;
}

std::vector<Posting> Transaction::getPostings() const {
  return m_postings;
}