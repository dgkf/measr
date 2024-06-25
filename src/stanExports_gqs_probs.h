// Generated by rstantools.  Do not edit by hand.

/*
    measr is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    measr is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with measr.  If not, see <http://www.gnu.org/licenses/>.
*/
#ifndef MODELS_HPP
#define MODELS_HPP
#define STAN__SERVICES__COMMAND_HPP
#ifndef USE_STANC3
#define USE_STANC3
#endif
#include <rstan/rstaninc.hpp>
// Code generated by stanc v2.32.2
#include <stan/model/model_header.hpp>
namespace model_gqs_probs_namespace {
using stan::model::model_base_crtp;
using namespace stan::math;
stan::math::profile_map profiles__;
static constexpr std::array<const char*, 57> locations_array__ =
  {" (found before start of program)",
  " (in 'gqs_probs', line 16, column 2 to column 19)",
  " (in 'gqs_probs', line 17, column 2 to column 17)",
  " (in 'gqs_probs', line 20, column 2 to column 30)",
  " (in 'gqs_probs', line 21, column 2 to column 29)",
  " (in 'gqs_probs', line 24, column 15 to column 16)",
  " (in 'gqs_probs', line 24, column 4 to column 29)",
  " (in 'gqs_probs', line 26, column 12 to column 18)",
  " (in 'gqs_probs', line 26, column 6 to column 35)",
  " (in 'gqs_probs', line 28, column 8 to column 37)",
  " (in 'gqs_probs', line 29, column 8 to line 30, column 68)",
  " (in 'gqs_probs', line 27, column 26 to line 31, column 7)",
  " (in 'gqs_probs', line 27, column 6 to line 31, column 7)",
  " (in 'gqs_probs', line 32, column 6 to column 49)",
  " (in 'gqs_probs', line 25, column 19 to line 33, column 5)",
  " (in 'gqs_probs', line 25, column 4 to line 33, column 5)",
  " (in 'gqs_probs', line 34, column 4 to column 72)",
  " (in 'gqs_probs', line 23, column 17 to line 35, column 3)",
  " (in 'gqs_probs', line 23, column 2 to line 35, column 3)",
  " (in 'gqs_probs', line 38, column 17 to column 18)",
  " (in 'gqs_probs', line 38, column 6 to column 36)",
  " (in 'gqs_probs', line 40, column 8 to column 63)",
  " (in 'gqs_probs', line 39, column 21 to line 41, column 7)",
  " (in 'gqs_probs', line 39, column 6 to line 41, column 7)",
  " (in 'gqs_probs', line 42, column 6 to column 49)",
  " (in 'gqs_probs', line 37, column 19 to line 43, column 5)",
  " (in 'gqs_probs', line 37, column 4 to line 43, column 5)",
  " (in 'gqs_probs', line 36, column 17 to line 44, column 3)",
  " (in 'gqs_probs', line 36, column 2 to line 44, column 3)",
  " (in 'gqs_probs', line 2, column 2 to column 17)",
  " (in 'gqs_probs', line 3, column 2 to column 17)",
  " (in 'gqs_probs', line 4, column 2 to column 17)",
  " (in 'gqs_probs', line 5, column 2 to column 17)",
  " (in 'gqs_probs', line 6, column 2 to column 17)",
  " (in 'gqs_probs', line 7, column 8 to column 9)",
  " (in 'gqs_probs', line 7, column 2 to column 35)",
  " (in 'gqs_probs', line 8, column 8 to column 9)",
  " (in 'gqs_probs', line 8, column 2 to column 35)",
  " (in 'gqs_probs', line 9, column 8 to column 9)",
  " (in 'gqs_probs', line 9, column 2 to column 34)",
  " (in 'gqs_probs', line 10, column 8 to column 9)",
  " (in 'gqs_probs', line 10, column 2 to column 38)",
  " (in 'gqs_probs', line 11, column 8 to column 9)",
  " (in 'gqs_probs', line 11, column 2 to column 36)",
  " (in 'gqs_probs', line 12, column 9 to column 10)",
  " (in 'gqs_probs', line 12, column 11 to column 12)",
  " (in 'gqs_probs', line 12, column 2 to column 20)",
  " (in 'gqs_probs', line 13, column 9 to column 10)",
  " (in 'gqs_probs', line 13, column 11 to column 12)",
  " (in 'gqs_probs', line 13, column 2 to column 17)",
  " (in 'gqs_probs', line 16, column 9 to column 10)",
  " (in 'gqs_probs', line 17, column 9 to column 10)",
  " (in 'gqs_probs', line 17, column 11 to column 12)",
  " (in 'gqs_probs', line 20, column 9 to column 10)",
  " (in 'gqs_probs', line 20, column 11 to column 12)",
  " (in 'gqs_probs', line 21, column 9 to column 10)",
  " (in 'gqs_probs', line 21, column 11 to column 12)"};
#include <stan_meta_header.hpp>
class model_gqs_probs final : public model_base_crtp<model_gqs_probs> {
private:
  int I;
  int R;
  int N;
  int C;
  int A;
  std::vector<int> ii;
  std::vector<int> rr;
  std::vector<int> y;
  std::vector<int> start;
  std::vector<int> num;
  Eigen::Matrix<double,-1,-1> Alpha_data__;
  Eigen::Matrix<double,-1,-1> Xi_data__;
  Eigen::Map<Eigen::Matrix<double,-1,-1>> Alpha{nullptr, 0, 0};
  Eigen::Map<Eigen::Matrix<double,-1,-1>> Xi{nullptr, 0, 0};
public:
  ~model_gqs_probs() {}
  model_gqs_probs(stan::io::var_context& context__, unsigned int
                  random_seed__ = 0, std::ostream* pstream__ = nullptr)
      : model_base_crtp(0) {
    int current_statement__ = 0;
    using local_scalar_t__ = double;
    boost::ecuyer1988 base_rng__ =
      stan::services::util::create_rng(random_seed__, 0);
    // suppress unused var warning
    (void) base_rng__;
    static constexpr const char* function__ =
      "model_gqs_probs_namespace::model_gqs_probs";
    // suppress unused var warning
    (void) function__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      current_statement__ = 29;
      context__.validate_dims("data initialization", "I", "int",
        std::vector<size_t>{});
      I = std::numeric_limits<int>::min();
      current_statement__ = 29;
      I = context__.vals_i("I")[(1 - 1)];
      current_statement__ = 29;
      stan::math::check_greater_or_equal(function__, "I", I, 1);
      current_statement__ = 30;
      context__.validate_dims("data initialization", "R", "int",
        std::vector<size_t>{});
      R = std::numeric_limits<int>::min();
      current_statement__ = 30;
      R = context__.vals_i("R")[(1 - 1)];
      current_statement__ = 30;
      stan::math::check_greater_or_equal(function__, "R", R, 1);
      current_statement__ = 31;
      context__.validate_dims("data initialization", "N", "int",
        std::vector<size_t>{});
      N = std::numeric_limits<int>::min();
      current_statement__ = 31;
      N = context__.vals_i("N")[(1 - 1)];
      current_statement__ = 31;
      stan::math::check_greater_or_equal(function__, "N", N, 1);
      current_statement__ = 32;
      context__.validate_dims("data initialization", "C", "int",
        std::vector<size_t>{});
      C = std::numeric_limits<int>::min();
      current_statement__ = 32;
      C = context__.vals_i("C")[(1 - 1)];
      current_statement__ = 32;
      stan::math::check_greater_or_equal(function__, "C", C, 1);
      current_statement__ = 33;
      context__.validate_dims("data initialization", "A", "int",
        std::vector<size_t>{});
      A = std::numeric_limits<int>::min();
      current_statement__ = 33;
      A = context__.vals_i("A")[(1 - 1)];
      current_statement__ = 33;
      stan::math::check_greater_or_equal(function__, "A", A, 1);
      current_statement__ = 34;
      stan::math::validate_non_negative_index("ii", "N", N);
      current_statement__ = 35;
      context__.validate_dims("data initialization", "ii", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      ii = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 35;
      ii = context__.vals_i("ii");
      current_statement__ = 35;
      stan::math::check_greater_or_equal(function__, "ii", ii, 1);
      current_statement__ = 35;
      stan::math::check_less_or_equal(function__, "ii", ii, I);
      current_statement__ = 36;
      stan::math::validate_non_negative_index("rr", "N", N);
      current_statement__ = 37;
      context__.validate_dims("data initialization", "rr", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      rr = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 37;
      rr = context__.vals_i("rr");
      current_statement__ = 37;
      stan::math::check_greater_or_equal(function__, "rr", rr, 1);
      current_statement__ = 37;
      stan::math::check_less_or_equal(function__, "rr", rr, R);
      current_statement__ = 38;
      stan::math::validate_non_negative_index("y", "N", N);
      current_statement__ = 39;
      context__.validate_dims("data initialization", "y", "int",
        std::vector<size_t>{static_cast<size_t>(N)});
      y = std::vector<int>(N, std::numeric_limits<int>::min());
      current_statement__ = 39;
      y = context__.vals_i("y");
      current_statement__ = 39;
      stan::math::check_greater_or_equal(function__, "y", y, 0);
      current_statement__ = 39;
      stan::math::check_less_or_equal(function__, "y", y, 1);
      current_statement__ = 40;
      stan::math::validate_non_negative_index("start", "R", R);
      current_statement__ = 41;
      context__.validate_dims("data initialization", "start", "int",
        std::vector<size_t>{static_cast<size_t>(R)});
      start = std::vector<int>(R, std::numeric_limits<int>::min());
      current_statement__ = 41;
      start = context__.vals_i("start");
      current_statement__ = 41;
      stan::math::check_greater_or_equal(function__, "start", start, 1);
      current_statement__ = 41;
      stan::math::check_less_or_equal(function__, "start", start, N);
      current_statement__ = 42;
      stan::math::validate_non_negative_index("num", "R", R);
      current_statement__ = 43;
      context__.validate_dims("data initialization", "num", "int",
        std::vector<size_t>{static_cast<size_t>(R)});
      num = std::vector<int>(R, std::numeric_limits<int>::min());
      current_statement__ = 43;
      num = context__.vals_i("num");
      current_statement__ = 43;
      stan::math::check_greater_or_equal(function__, "num", num, 1);
      current_statement__ = 43;
      stan::math::check_less_or_equal(function__, "num", num, I);
      current_statement__ = 44;
      stan::math::validate_non_negative_index("Alpha", "C", C);
      current_statement__ = 45;
      stan::math::validate_non_negative_index("Alpha", "A", A);
      current_statement__ = 46;
      context__.validate_dims("data initialization", "Alpha", "double",
        std::vector<size_t>{static_cast<size_t>(C), static_cast<size_t>(A)});
      Alpha_data__ = Eigen::Matrix<double,-1,-1>::Constant(C, A,
                       std::numeric_limits<double>::quiet_NaN());
      new (&Alpha)
        Eigen::Map<Eigen::Matrix<double,-1,-1>>(Alpha_data__.data(), C, A);
      {
        std::vector<local_scalar_t__> Alpha_flat__;
        current_statement__ = 46;
        Alpha_flat__ = context__.vals_r("Alpha");
        current_statement__ = 46;
        pos__ = 1;
        current_statement__ = 46;
        for (int sym1__ = 1; sym1__ <= A; ++sym1__) {
          current_statement__ = 46;
          for (int sym2__ = 1; sym2__ <= C; ++sym2__) {
            current_statement__ = 46;
            stan::model::assign(Alpha, Alpha_flat__[(pos__ - 1)],
              "assigning variable Alpha", stan::model::index_uni(sym2__),
              stan::model::index_uni(sym1__));
            current_statement__ = 46;
            pos__ = (pos__ + 1);
          }
        }
      }
      current_statement__ = 47;
      stan::math::validate_non_negative_index("Xi", "I", I);
      current_statement__ = 48;
      stan::math::validate_non_negative_index("Xi", "C", C);
      current_statement__ = 49;
      context__.validate_dims("data initialization", "Xi", "double",
        std::vector<size_t>{static_cast<size_t>(I), static_cast<size_t>(C)});
      Xi_data__ = Eigen::Matrix<double,-1,-1>::Constant(I, C,
                    std::numeric_limits<double>::quiet_NaN());
      new (&Xi) Eigen::Map<Eigen::Matrix<double,-1,-1>>(Xi_data__.data(), I,
        C);
      {
        std::vector<local_scalar_t__> Xi_flat__;
        current_statement__ = 49;
        Xi_flat__ = context__.vals_r("Xi");
        current_statement__ = 49;
        pos__ = 1;
        current_statement__ = 49;
        for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
          current_statement__ = 49;
          for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
            current_statement__ = 49;
            stan::model::assign(Xi, Xi_flat__[(pos__ - 1)],
              "assigning variable Xi", stan::model::index_uni(sym2__),
              stan::model::index_uni(sym1__));
            current_statement__ = 49;
            pos__ = (pos__ + 1);
          }
        }
      }
      current_statement__ = 50;
      stan::math::validate_non_negative_index("log_Vc", "C", C);
      current_statement__ = 51;
      stan::math::validate_non_negative_index("pi", "I", I);
      current_statement__ = 52;
      stan::math::validate_non_negative_index("pi", "C", C);
      current_statement__ = 53;
      stan::math::validate_non_negative_index("prob_resp_class", "R", R);
      current_statement__ = 54;
      stan::math::validate_non_negative_index("prob_resp_class", "C", C);
      current_statement__ = 55;
      stan::math::validate_non_negative_index("prob_resp_attr", "R", R);
      current_statement__ = 56;
      stan::math::validate_non_negative_index("prob_resp_attr", "A", A);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    num_params_r__ = C + (I * C);
  }
  inline std::string model_name() const final {
    return "model_gqs_probs";
  }
  inline std::vector<std::string> model_compile_info() const noexcept {
    return std::vector<std::string>{"stanc_version = stanc3 v2.32.2",
             "stancflags = --allow-undefined"};
  }
  template <bool propto__, bool jacobian__, typename VecR, typename VecI,
            stan::require_vector_like_t<VecR>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline stan::scalar_type_t<VecR>
  log_prob_impl(VecR& params_r__, VecI& params_i__, std::ostream*
                pstream__ = nullptr) const {
    using T__ = stan::scalar_type_t<VecR>;
    using local_scalar_t__ = T__;
    T__ lp__(0.0);
    stan::math::accumulator<T__> lp_accum__;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    static constexpr const char* function__ =
      "model_gqs_probs_namespace::log_prob";
    // suppress unused var warning
    (void) function__;
    try {
      Eigen::Matrix<local_scalar_t__,-1,1> log_Vc =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      current_statement__ = 1;
      log_Vc = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(C);
      Eigen::Matrix<local_scalar_t__,-1,-1> pi =
        Eigen::Matrix<local_scalar_t__,-1,-1>::Constant(I, C, DUMMY_VAR__);
      current_statement__ = 2;
      pi = in__.template read<Eigen::Matrix<local_scalar_t__,-1,-1>>(I, C);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
    lp_accum__.add(lp__);
    return lp_accum__.sum();
  }
  template <typename RNG, typename VecR, typename VecI, typename VecVar,
            stan::require_vector_like_vt<std::is_floating_point,
            VecR>* = nullptr, stan::require_vector_like_vt<std::is_integral,
            VecI>* = nullptr, stan::require_vector_vt<std::is_floating_point,
            VecVar>* = nullptr>
  inline void
  write_array_impl(RNG& base_rng__, VecR& params_r__, VecI& params_i__,
                   VecVar& vars__, const bool
                   emit_transformed_parameters__ = true, const bool
                   emit_generated_quantities__ = true, std::ostream*
                   pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    static constexpr bool propto__ = true;
    // suppress unused var warning
    (void) propto__;
    double lp__ = 0.0;
    // suppress unused var warning
    (void) lp__;
    int current_statement__ = 0;
    stan::math::accumulator<double> lp_accum__;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    constexpr bool jacobian__ = false;
    static constexpr const char* function__ =
      "model_gqs_probs_namespace::write_array";
    // suppress unused var warning
    (void) function__;
    try {
      Eigen::Matrix<double,-1,1> log_Vc =
        Eigen::Matrix<double,-1,1>::Constant(C,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 1;
      log_Vc = in__.template read<Eigen::Matrix<local_scalar_t__,-1,1>>(C);
      Eigen::Matrix<double,-1,-1> pi =
        Eigen::Matrix<double,-1,-1>::Constant(I, C,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 2;
      pi = in__.template read<Eigen::Matrix<local_scalar_t__,-1,-1>>(I, C);
      out__.write(log_Vc);
      out__.write(pi);
      if (stan::math::logical_negation(
            (stan::math::primitive_value(emit_transformed_parameters__) ||
            stan::math::primitive_value(emit_generated_quantities__)))) {
        return ;
      }
      if (stan::math::logical_negation(emit_generated_quantities__)) {
        return ;
      }
      Eigen::Matrix<double,-1,-1> prob_resp_class =
        Eigen::Matrix<double,-1,-1>::Constant(R, C,
          std::numeric_limits<double>::quiet_NaN());
      Eigen::Matrix<double,-1,-1> prob_resp_attr =
        Eigen::Matrix<double,-1,-1>::Constant(R, A,
          std::numeric_limits<double>::quiet_NaN());
      current_statement__ = 18;
      for (int r = 1; r <= R; ++r) {
        current_statement__ = 5;
        stan::math::validate_non_negative_index("prob_joint", "C", C);
        Eigen::Matrix<double,1,-1> prob_joint =
          Eigen::Matrix<double,1,-1>::Constant(C,
            std::numeric_limits<double>::quiet_NaN());
        current_statement__ = 15;
        for (int c = 1; c <= C; ++c) {
          current_statement__ = 7;
          stan::math::validate_non_negative_index("log_items", "num[r]",
            stan::model::rvalue(num, "num", stan::model::index_uni(r)));
          std::vector<double> log_items =
            std::vector<double>(stan::model::rvalue(num, "num",
                                  stan::model::index_uni(r)),
              std::numeric_limits<double>::quiet_NaN());
          current_statement__ = 12;
          for (int m = 1; m <=
               stan::model::rvalue(num, "num", stan::model::index_uni(r)); ++m) {
            int i = std::numeric_limits<int>::min();
            current_statement__ = 9;
            i = stan::model::rvalue(ii, "ii",
                  stan::model::index_uni(
                    ((stan::model::rvalue(start, "start",
                        stan::model::index_uni(r)) + m) - 1)));
            current_statement__ = 10;
            stan::model::assign(log_items,
              ((stan::model::rvalue(y, "y",
                  stan::model::index_uni(
                    ((stan::model::rvalue(start, "start",
                        stan::model::index_uni(r)) + m) - 1))) *
              stan::math::log(
                stan::model::rvalue(pi, "pi", stan::model::index_uni(i),
                  stan::model::index_uni(c)))) + ((1 -
              stan::model::rvalue(y, "y",
                stan::model::index_uni(
                  ((stan::model::rvalue(start, "start",
                      stan::model::index_uni(r)) + m) - 1)))) *
              stan::math::log((1 -
                stan::model::rvalue(pi, "pi", stan::model::index_uni(i),
                  stan::model::index_uni(c)))))),
              "assigning variable log_items", stan::model::index_uni(m));
          }
          current_statement__ = 13;
          stan::model::assign(prob_joint,
            (stan::model::rvalue(log_Vc, "log_Vc", stan::model::index_uni(c))
            + stan::math::sum(log_items)), "assigning variable prob_joint",
            stan::model::index_uni(c));
        }
        current_statement__ = 16;
        stan::model::assign(prob_resp_class,
          stan::math::divide(stan::math::exp(prob_joint),
            stan::math::exp(stan::math::log_sum_exp(prob_joint))),
          "assigning variable prob_resp_class", stan::model::index_uni(r));
      }
      current_statement__ = 28;
      for (int r = 1; r <= R; ++r) {
        current_statement__ = 26;
        for (int a = 1; a <= A; ++a) {
          current_statement__ = 19;
          stan::math::validate_non_negative_index("prob_attr_class", "C", C);
          Eigen::Matrix<double,1,-1> prob_attr_class =
            Eigen::Matrix<double,1,-1>::Constant(C,
              std::numeric_limits<double>::quiet_NaN());
          current_statement__ = 23;
          for (int c = 1; c <= C; ++c) {
            current_statement__ = 21;
            stan::model::assign(prob_attr_class,
              (stan::model::rvalue(prob_resp_class, "prob_resp_class",
                 stan::model::index_uni(r), stan::model::index_uni(c)) *
              stan::model::rvalue(Alpha, "Alpha", stan::model::index_uni(c),
                stan::model::index_uni(a))),
              "assigning variable prob_attr_class", stan::model::index_uni(c));
          }
          current_statement__ = 24;
          stan::model::assign(prob_resp_attr,
            stan::math::sum(prob_attr_class),
            "assigning variable prob_resp_attr", stan::model::index_uni(r),
            stan::model::index_uni(a));
        }
      }
      out__.write(prob_resp_class);
      out__.write(prob_resp_attr);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, typename VecI,
            stan::require_vector_t<VecVar>* = nullptr,
            stan::require_vector_like_vt<std::is_integral, VecI>* = nullptr>
  inline void
  unconstrain_array_impl(const VecVar& params_r__, const VecI& params_i__,
                         VecVar& vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::deserializer<local_scalar_t__> in__(params_r__, params_i__);
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      Eigen::Matrix<local_scalar_t__,-1,1> log_Vc =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      current_statement__ = 1;
      stan::model::assign(log_Vc,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,1>>(C),
        "assigning variable log_Vc");
      out__.write(log_Vc);
      Eigen::Matrix<local_scalar_t__,-1,-1> pi =
        Eigen::Matrix<local_scalar_t__,-1,-1>::Constant(I, C, DUMMY_VAR__);
      current_statement__ = 2;
      stan::model::assign(pi,
        in__.read<Eigen::Matrix<local_scalar_t__,-1,-1>>(I, C),
        "assigning variable pi");
      out__.write(pi);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  template <typename VecVar, stan::require_vector_t<VecVar>* = nullptr>
  inline void
  transform_inits_impl(const stan::io::var_context& context__, VecVar&
                       vars__, std::ostream* pstream__ = nullptr) const {
    using local_scalar_t__ = double;
    stan::io::serializer<local_scalar_t__> out__(vars__);
    int current_statement__ = 0;
    local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
    // suppress unused var warning
    (void) DUMMY_VAR__;
    try {
      current_statement__ = 1;
      context__.validate_dims("parameter initialization", "log_Vc", "double",
        std::vector<size_t>{static_cast<size_t>(C)});
      current_statement__ = 2;
      context__.validate_dims("parameter initialization", "pi", "double",
        std::vector<size_t>{static_cast<size_t>(I), static_cast<size_t>(C)});
      int pos__ = std::numeric_limits<int>::min();
      pos__ = 1;
      Eigen::Matrix<local_scalar_t__,-1,1> log_Vc =
        Eigen::Matrix<local_scalar_t__,-1,1>::Constant(C, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> log_Vc_flat__;
        current_statement__ = 1;
        log_Vc_flat__ = context__.vals_r("log_Vc");
        current_statement__ = 1;
        pos__ = 1;
        current_statement__ = 1;
        for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
          current_statement__ = 1;
          stan::model::assign(log_Vc, log_Vc_flat__[(pos__ - 1)],
            "assigning variable log_Vc", stan::model::index_uni(sym1__));
          current_statement__ = 1;
          pos__ = (pos__ + 1);
        }
      }
      out__.write(log_Vc);
      Eigen::Matrix<local_scalar_t__,-1,-1> pi =
        Eigen::Matrix<local_scalar_t__,-1,-1>::Constant(I, C, DUMMY_VAR__);
      {
        std::vector<local_scalar_t__> pi_flat__;
        current_statement__ = 2;
        pi_flat__ = context__.vals_r("pi");
        current_statement__ = 2;
        pos__ = 1;
        current_statement__ = 2;
        for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
          current_statement__ = 2;
          for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
            current_statement__ = 2;
            stan::model::assign(pi, pi_flat__[(pos__ - 1)],
              "assigning variable pi", stan::model::index_uni(sym2__),
              stan::model::index_uni(sym1__));
            current_statement__ = 2;
            pos__ = (pos__ + 1);
          }
        }
      }
      out__.write(pi);
    } catch (const std::exception& e) {
      stan::lang::rethrow_located(e, locations_array__[current_statement__]);
    }
  }
  inline void
  get_param_names(std::vector<std::string>& names__, const bool
                  emit_transformed_parameters__ = true, const bool
                  emit_generated_quantities__ = true) const {
    names__ = std::vector<std::string>{"log_Vc", "pi"};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::string> temp{"prob_resp_class", "prob_resp_attr"};
      names__.reserve(names__.size() + temp.size());
      names__.insert(names__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  get_dims(std::vector<std::vector<size_t>>& dimss__, const bool
           emit_transformed_parameters__ = true, const bool
           emit_generated_quantities__ = true) const {
    dimss__ = std::vector<std::vector<size_t>>{std::vector<size_t>{static_cast<
                                                                    size_t>(C)},
                std::vector<size_t>{static_cast<size_t>(I),
                  static_cast<size_t>(C)}};
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      std::vector<std::vector<size_t>>
        temp{std::vector<size_t>{static_cast<size_t>(R),
               static_cast<size_t>(C)},
             std::vector<size_t>{static_cast<size_t>(R),
               static_cast<size_t>(A)}};
      dimss__.reserve(dimss__.size() + temp.size());
      dimss__.insert(dimss__.end(), temp.begin(), temp.end());
    }
  }
  inline void
  constrained_param_names(std::vector<std::string>& param_names__, bool
                          emit_transformed_parameters__ = true, bool
                          emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      param_names__.emplace_back(std::string() + "log_Vc" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
        param_names__.emplace_back(std::string() + "pi" + '.' +
          std::to_string(sym2__) + '.' + std::to_string(sym1__));
      }
    }
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= R; ++sym2__) {
          param_names__.emplace_back(std::string() + "prob_resp_class" + '.'
            + std::to_string(sym2__) + '.' + std::to_string(sym1__));
        }
      }
      for (int sym1__ = 1; sym1__ <= A; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= R; ++sym2__) {
          param_names__.emplace_back(std::string() + "prob_resp_attr" + '.' +
            std::to_string(sym2__) + '.' + std::to_string(sym1__));
        }
      }
    }
  }
  inline void
  unconstrained_param_names(std::vector<std::string>& param_names__, bool
                            emit_transformed_parameters__ = true, bool
                            emit_generated_quantities__ = true) const final {
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      param_names__.emplace_back(std::string() + "log_Vc" + '.' +
        std::to_string(sym1__));
    }
    for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
      for (int sym2__ = 1; sym2__ <= I; ++sym2__) {
        param_names__.emplace_back(std::string() + "pi" + '.' +
          std::to_string(sym2__) + '.' + std::to_string(sym1__));
      }
    }
    if (emit_transformed_parameters__) {}
    if (emit_generated_quantities__) {
      for (int sym1__ = 1; sym1__ <= C; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= R; ++sym2__) {
          param_names__.emplace_back(std::string() + "prob_resp_class" + '.'
            + std::to_string(sym2__) + '.' + std::to_string(sym1__));
        }
      }
      for (int sym1__ = 1; sym1__ <= A; ++sym1__) {
        for (int sym2__ = 1; sym2__ <= R; ++sym2__) {
          param_names__.emplace_back(std::string() + "prob_resp_attr" + '.' +
            std::to_string(sym2__) + '.' + std::to_string(sym1__));
        }
      }
    }
  }
  inline std::string get_constrained_sizedtypes() const {
    return std::string("[{\"name\":\"log_Vc\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"pi\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(I) + ",\"cols\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"prob_resp_class\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(R) + ",\"cols\":" + std::to_string(C) + "},\"block\":\"generated_quantities\"},{\"name\":\"prob_resp_attr\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(R) + ",\"cols\":" + std::to_string(A) + "},\"block\":\"generated_quantities\"}]");
  }
  inline std::string get_unconstrained_sizedtypes() const {
    return std::string("[{\"name\":\"log_Vc\",\"type\":{\"name\":\"vector\",\"length\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"pi\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(I) + ",\"cols\":" + std::to_string(C) + "},\"block\":\"parameters\"},{\"name\":\"prob_resp_class\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(R) + ",\"cols\":" + std::to_string(C) + "},\"block\":\"generated_quantities\"},{\"name\":\"prob_resp_attr\",\"type\":{\"name\":\"matrix\",\"rows\":" + std::to_string(R) + ",\"cols\":" + std::to_string(A) + "},\"block\":\"generated_quantities\"}]");
  }
  // Begin method overload boilerplate
  template <typename RNG> inline void
  write_array(RNG& base_rng, Eigen::Matrix<double,-1,1>& params_r,
              Eigen::Matrix<double,-1,1>& vars, const bool
              emit_transformed_parameters = true, const bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (C + (I * C));
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (((R * C) +
      (R * A)));
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    std::vector<int> params_i;
    vars = Eigen::Matrix<double,-1,1>::Constant(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <typename RNG> inline void
  write_array(RNG& base_rng, std::vector<double>& params_r, std::vector<int>&
              params_i, std::vector<double>& vars, bool
              emit_transformed_parameters = true, bool
              emit_generated_quantities = true, std::ostream*
              pstream = nullptr) const {
    const size_t num_params__ = (C + (I * C));
    const size_t num_transformed = emit_transformed_parameters * (0);
    const size_t num_gen_quantities = emit_generated_quantities * (((R * C) +
      (R * A)));
    const size_t num_to_write = num_params__ + num_transformed +
      num_gen_quantities;
    vars = std::vector<double>(num_to_write,
             std::numeric_limits<double>::quiet_NaN());
    write_array_impl(base_rng, params_r, params_i, vars,
      emit_transformed_parameters, emit_generated_quantities, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(Eigen::Matrix<T_,-1,1>& params_r, std::ostream* pstream = nullptr) const {
    Eigen::Matrix<int,-1,1> params_i;
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  template <bool propto__, bool jacobian__, typename T_> inline T_
  log_prob(std::vector<T_>& params_r, std::vector<int>& params_i,
           std::ostream* pstream = nullptr) const {
    return log_prob_impl<propto__, jacobian__>(params_r, params_i, pstream);
  }
  inline void
  transform_inits(const stan::io::var_context& context,
                  Eigen::Matrix<double,-1,1>& params_r, std::ostream*
                  pstream = nullptr) const final {
    std::vector<double> params_r_vec(params_r.size());
    std::vector<int> params_i;
    transform_inits(context, params_i, params_r_vec, pstream);
    params_r = Eigen::Map<Eigen::Matrix<double,-1,1>>(params_r_vec.data(),
                 params_r_vec.size());
  }
  inline void
  transform_inits(const stan::io::var_context& context, std::vector<int>&
                  params_i, std::vector<double>& vars, std::ostream*
                  pstream__ = nullptr) const {
    vars.resize(num_params_r__);
    transform_inits_impl(context, vars, pstream__);
  }
  inline void
  unconstrain_array(const std::vector<double>& params_constrained,
                    std::vector<double>& params_unconstrained, std::ostream*
                    pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = std::vector<double>(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
  inline void
  unconstrain_array(const Eigen::Matrix<double,-1,1>& params_constrained,
                    Eigen::Matrix<double,-1,1>& params_unconstrained,
                    std::ostream* pstream = nullptr) const {
    const std::vector<int> params_i;
    params_unconstrained = Eigen::Matrix<double,-1,1>::Constant(num_params_r__,
                             std::numeric_limits<double>::quiet_NaN());
    unconstrain_array_impl(params_constrained, params_i,
      params_unconstrained, pstream);
  }
};
}
using stan_model = model_gqs_probs_namespace::model_gqs_probs;
#ifndef USING_R
// Boilerplate
stan::model::model_base&
new_model(stan::io::var_context& data_context, unsigned int seed,
          std::ostream* msg_stream) {
  stan_model* m = new stan_model(data_context, seed, msg_stream);
  return *m;
}
stan::math::profile_map& get_stan_profile_data() {
  return model_gqs_probs_namespace::profiles__;
}
#endif
#endif