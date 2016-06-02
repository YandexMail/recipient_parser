#include <recipient_parser/from_string/whitespaces.hpp>

#include <recipient_parser/whitespaces.hpp>
#include "detail/parse_template.hpp"

namespace rcpt_parser {

std::string::const_iterator parse_fws(
        const std::string& input,
        std::string& result) {
    return detail::parse_template<FWS>(input, result);
}

std::string::const_iterator parse_cfws(
        const std::string& input,
        std::string& result) {
    return detail::parse_template<CFWS>(input, result);
}

} // namespace rcpt_parser
