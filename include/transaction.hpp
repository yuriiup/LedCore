#include <string>
#include <vector>
#include "posting.hpp"

class Transaction {
 private:
  std::string m_id;
  std::string m_description;
  std::string m_start;
  std::vector<Posting> m_postings;

 public:
  Transaction(const std::string& p_id, const std::string& p_description,
              const std::string& p_start,
              const std::vector<Posting>& p_postings) {};
  std::string getId() const;
  std::string getDescription() const;
  std::string getStart() const;
  std::vector<Posting> getPostings() const;
};