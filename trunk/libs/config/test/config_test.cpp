//  This file was automatically generated on Sat Sep 20 09:49:52 2008
//  by libs/config/tools/generate.cpp
//  Copyright John Maddock 2002-4.
//  Use, modification and distribution are subject to the 
//  Boost Software License, Version 1.0. (See accompanying file 
//  LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/config for the most recent version.//
//  Revision $Id: config_test.cpp 49212 2008-10-09 16:08:03Z johnmaddock $
//

// Test file for config setup
// This file should compile, if it does not then
// one or more macros need to be defined.
// see boost_*.ipp for more details

// Do not edit this file, it was generated automatically by

#include <boost/config.hpp>
#include <iostream>
#include "test.hpp"

int error_count = 0;

#ifndef BOOST_NO_ADL_BARRIER
#include "boost_no_adl_barrier.ipp"
#else
namespace boost_no_adl_barrier = empty_boost;
#endif
#ifndef BOOST_NO_ARGUMENT_DEPENDENT_LOOKUP
#include "boost_no_arg_dep_lookup.ipp"
#else
namespace boost_no_argument_dependent_lookup = empty_boost;
#endif
#ifndef BOOST_NO_ARRAY_TYPE_SPECIALIZATIONS
#include "boost_no_array_type_spec.ipp"
#else
namespace boost_no_array_type_specializations = empty_boost;
#endif
#ifndef BOOST_NO_AUTO_PTR
#include "boost_no_auto_ptr.ipp"
#else
namespace boost_no_auto_ptr = empty_boost;
#endif
#ifndef BOOST_BCB_PARTIAL_SPECIALIZATION_BUG
#include "boost_no_bcb_partial_spec.ipp"
#else
namespace boost_bcb_partial_specialization_bug = empty_boost;
#endif
#ifndef BOOST_NO_CTYPE_FUNCTIONS
#include "boost_no_ctype_functions.ipp"
#else
namespace boost_no_ctype_functions = empty_boost;
#endif
#ifndef BOOST_NO_CV_SPECIALIZATIONS
#include "boost_no_cv_spec.ipp"
#else
namespace boost_no_cv_specializations = empty_boost;
#endif
#ifndef BOOST_NO_CV_VOID_SPECIALIZATIONS
#include "boost_no_cv_void_spec.ipp"
#else
namespace boost_no_cv_void_specializations = empty_boost;
#endif
#ifndef BOOST_NO_CWCHAR
#include "boost_no_cwchar.ipp"
#else
namespace boost_no_cwchar = empty_boost;
#endif
#ifndef BOOST_NO_CWCTYPE
#include "boost_no_cwctype.ipp"
#else
namespace boost_no_cwctype = empty_boost;
#endif
#ifndef BOOST_DEDUCED_TYPENAME
#include "boost_no_ded_typename.ipp"
#else
namespace boost_deduced_typename = empty_boost;
#endif
#ifndef BOOST_NO_DEPENDENT_NESTED_DERIVATIONS
#include "boost_no_dep_nested_class.ipp"
#else
namespace boost_no_dependent_nested_derivations = empty_boost;
#endif
#ifndef BOOST_NO_DEPENDENT_TYPES_IN_TEMPLATE_VALUE_PARAMETERS
#include "boost_no_dep_val_param.ipp"
#else
namespace boost_no_dependent_types_in_template_value_parameters = empty_boost;
#endif
#ifndef BOOST_NO_EXCEPTIONS
#include "boost_no_exceptions.ipp"
#else
namespace boost_no_exceptions = empty_boost;
#endif
#ifndef BOOST_NO_EXCEPTION_STD_NAMESPACE
#include "boost_no_excep_std.ipp"
#else
namespace boost_no_exception_std_namespace = empty_boost;
#endif
#ifndef BOOST_NO_EXPLICIT_FUNCTION_TEMPLATE_ARGUMENTS
#include "boost_no_exp_func_tem_arg.ipp"
#else
namespace boost_no_explicit_function_template_arguments = empty_boost;
#endif
#ifndef BOOST_NO_FUNCTION_TYPE_SPECIALIZATIONS
#include "boost_no_function_type_spec.ipp"
#else
namespace boost_no_function_type_specializations = empty_boost;
#endif
#ifndef BOOST_NO_FUNCTION_TEMPLATE_ORDERING
#include "boost_no_func_tmp_order.ipp"
#else
namespace boost_no_function_template_ordering = empty_boost;
#endif
#ifndef BOOST_NO_MS_INT64_NUMERIC_LIMITS
#include "boost_no_i64_limits.ipp"
#else
namespace boost_no_ms_int64_numeric_limits = empty_boost;
#endif
#ifndef BOOST_NO_INCLASS_MEMBER_INITIALIZATION
#include "boost_no_inline_memb_init.ipp"
#else
namespace boost_no_inclass_member_initialization = empty_boost;
#endif
#ifndef BOOST_NO_INTEGRAL_INT64_T
#include "boost_no_integral_int64_t.ipp"
#else
namespace boost_no_integral_int64_t = empty_boost;
#endif
#ifndef BOOST_NO_IOSFWD
#include "boost_no_iosfwd.ipp"
#else
namespace boost_no_iosfwd = empty_boost;
#endif
#ifndef BOOST_NO_IOSTREAM
#include "boost_no_iostream.ipp"
#else
namespace boost_no_iostream = empty_boost;
#endif
#ifndef BOOST_NO_IS_ABSTRACT
#include "boost_no_is_abstract.ipp"
#else
namespace boost_no_is_abstract = empty_boost;
#endif
#ifndef BOOST_NO_TEMPLATED_ITERATOR_CONSTRUCTORS
#include "boost_no_iter_construct.ipp"
#else
namespace boost_no_templated_iterator_constructors = empty_boost;
#endif
#ifndef BOOST_NO_LIMITS
#include "boost_no_limits.ipp"
#else
namespace boost_no_limits = empty_boost;
#endif
#ifndef BOOST_NO_LIMITS_COMPILE_TIME_CONSTANTS
#include "boost_no_limits_const_exp.ipp"
#else
namespace boost_no_limits_compile_time_constants = empty_boost;
#endif
#ifndef BOOST_NO_LONG_LONG_NUMERIC_LIMITS
#include "boost_no_ll_limits.ipp"
#else
namespace boost_no_long_long_numeric_limits = empty_boost;
#endif
#ifndef BOOST_NO_MEMBER_FUNCTION_SPECIALIZATIONS
#include "boost_no_mem_func_spec.ipp"
#else
namespace boost_no_member_function_specializations = empty_boost;
#endif
#ifndef BOOST_NO_MEMBER_TEMPLATES
#include "boost_no_mem_templates.ipp"
#else
namespace boost_no_member_templates = empty_boost;
#endif
#ifndef BOOST_NO_MEMBER_TEMPLATE_FRIENDS
#include "boost_no_mem_templ_frnds.ipp"
#else
namespace boost_no_member_template_friends = empty_boost;
#endif
#ifndef BOOST_NO_MEMBER_TEMPLATE_KEYWORD
#include "boost_no_mem_tem_keyword.ipp"
#else
namespace boost_no_member_template_keyword = empty_boost;
#endif
#ifndef BOOST_NO_POINTER_TO_MEMBER_TEMPLATE_PARAMETERS
#include "boost_no_mem_tem_pnts.ipp"
#else
namespace boost_no_pointer_to_member_template_parameters = empty_boost;
#endif
#ifndef BOOST_NO_NESTED_FRIENDSHIP
#include "boost_no_nested_friendship.ipp"
#else
namespace boost_no_nested_friendship = empty_boost;
#endif
#ifndef BOOST_NO_OPERATORS_IN_NAMESPACE
#include "boost_no_ops_in_namespace.ipp"
#else
namespace boost_no_operators_in_namespace = empty_boost;
#endif
#ifndef BOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION
#include "boost_no_partial_spec.ipp"
#else
namespace boost_no_template_partial_specialization = empty_boost;
#endif
#ifndef BOOST_NO_PARTIAL_SPECIALIZATION_IMPLICIT_DEFAULT_ARGS
#include "boost_no_part_spec_def_args.ipp"
#else
namespace boost_no_partial_specialization_implicit_default_args = empty_boost;
#endif
#ifndef BOOST_NO_PRIVATE_IN_AGGREGATE
#include "boost_no_priv_aggregate.ipp"
#else
namespace boost_no_private_in_aggregate = empty_boost;
#endif
#ifndef BOOST_NO_POINTER_TO_MEMBER_CONST
#include "boost_no_ptr_mem_const.ipp"
#else
namespace boost_no_pointer_to_member_const = empty_boost;
#endif
#ifndef BOOST_NO_UNREACHABLE_RETURN_DETECTION
#include "boost_no_ret_det.ipp"
#else
namespace boost_no_unreachable_return_detection = empty_boost;
#endif
#ifndef BOOST_NO_RTTI
#include "boost_no_rtti.ipp"
#else
namespace boost_no_rtti = empty_boost;
#endif
#ifndef BOOST_NO_SFINAE
#include "boost_no_sfinae.ipp"
#else
namespace boost_no_sfinae = empty_boost;
#endif
#ifndef BOOST_NO_STRINGSTREAM
#include "boost_no_sstream.ipp"
#else
namespace boost_no_stringstream = empty_boost;
#endif
#ifndef BOOST_NO_STDC_NAMESPACE
#include "boost_no_stdc_namespace.ipp"
#else
namespace boost_no_stdc_namespace = empty_boost;
#endif
#ifndef BOOST_NO_STD_ALLOCATOR
#include "boost_no_std_allocator.ipp"
#else
namespace boost_no_std_allocator = empty_boost;
#endif
#ifndef BOOST_NO_STD_DISTANCE
#include "boost_no_std_distance.ipp"
#else
namespace boost_no_std_distance = empty_boost;
#endif
#ifndef BOOST_NO_STD_ITERATOR
#include "boost_no_std_iterator.ipp"
#else
namespace boost_no_std_iterator = empty_boost;
#endif
#ifndef BOOST_NO_STD_ITERATOR_TRAITS
#include "boost_no_std_iter_traits.ipp"
#else
namespace boost_no_std_iterator_traits = empty_boost;
#endif
#ifndef BOOST_NO_STD_LOCALE
#include "boost_no_std_locale.ipp"
#else
namespace boost_no_std_locale = empty_boost;
#endif
#ifndef BOOST_NO_STD_MESSAGES
#include "boost_no_std_messages.ipp"
#else
namespace boost_no_std_messages = empty_boost;
#endif
#ifndef BOOST_NO_STD_MIN_MAX
#include "boost_no_std_min_max.ipp"
#else
namespace boost_no_std_min_max = empty_boost;
#endif
#ifndef BOOST_NO_STD_OUTPUT_ITERATOR_ASSIGN
#include "boost_no_std_oi_assign.ipp"
#else
namespace boost_no_std_output_iterator_assign = empty_boost;
#endif
#ifndef BOOST_NO_STD_TYPEINFO
#include "boost_no_std_typeinfo.ipp"
#else
namespace boost_no_std_typeinfo = empty_boost;
#endif
#ifndef BOOST_NO_STD_USE_FACET
#include "boost_no_std_use_facet.ipp"
#else
namespace boost_no_std_use_facet = empty_boost;
#endif
#ifndef BOOST_NO_STD_WSTREAMBUF
#include "boost_no_std_wstreambuf.ipp"
#else
namespace boost_no_std_wstreambuf = empty_boost;
#endif
#ifndef BOOST_NO_STD_WSTRING
#include "boost_no_std_wstring.ipp"
#else
namespace boost_no_std_wstring = empty_boost;
#endif
#ifndef BOOST_NO_SWPRINTF
#include "boost_no_swprintf.ipp"
#else
namespace boost_no_swprintf = empty_boost;
#endif
#ifndef BOOST_NO_TEMPLATED_IOSTREAMS
#include "boost_no_template_streams.ipp"
#else
namespace boost_no_templated_iostreams = empty_boost;
#endif
#ifndef BOOST_NO_TEMPLATE_TEMPLATES
#include "boost_no_template_template.ipp"
#else
namespace boost_no_template_templates = empty_boost;
#endif
#ifndef BOOST_NO_TWO_PHASE_NAME_LOOKUP
#include "boost_no_two_phase_lookup.ipp"
#else
namespace boost_no_two_phase_name_lookup = empty_boost;
#endif
#ifndef BOOST_NO_TYPEID
#include "boost_no_typeid.ipp"
#else
namespace boost_no_typeid = empty_boost;
#endif
#ifndef BOOST_NO_TYPENAME_WITH_CTOR
#include "boost_no_typename_with_ctor.ipp"
#else
namespace boost_no_typename_with_ctor = empty_boost;
#endif
#ifndef BOOST_FUNCTION_SCOPE_USING_DECLARATION_BREAKS_ADL
#include "boost_no_using_breaks_adl.ipp"
#else
namespace boost_function_scope_using_declaration_breaks_adl = empty_boost;
#endif
#ifndef BOOST_NO_USING_DECLARATION_OVERLOADS_FROM_TYPENAME_BASE
#include "boost_no_using_decl_overld.ipp"
#else
namespace boost_no_using_declaration_overloads_from_typename_base = empty_boost;
#endif
#ifndef BOOST_NO_USING_TEMPLATE
#include "boost_no_using_template.ipp"
#else
namespace boost_no_using_template = empty_boost;
#endif
#ifndef BOOST_NO_VOID_RETURNS
#include "boost_no_void_returns.ipp"
#else
namespace boost_no_void_returns = empty_boost;
#endif
#ifndef BOOST_NO_INTRINSIC_WCHAR_T
#include "boost_no_wchar_t.ipp"
#else
namespace boost_no_intrinsic_wchar_t = empty_boost;
#endif

#ifdef BOOST_HAS_TWO_ARG_USE_FACET
#include "boost_has_2arg_use_facet.ipp"
#else
namespace boost_has_two_arg_use_facet = empty_boost;
#endif
#ifdef BOOST_HAS_BETHREADS
#include "boost_has_bethreads.ipp"
#else
namespace boost_has_bethreads = empty_boost;
#endif
#ifdef BOOST_HAS_CLOCK_GETTIME
#include "boost_has_clock_gettime.ipp"
#else
namespace boost_has_clock_gettime = empty_boost;
#endif
#ifdef BOOST_HAS_CONCEPTS
#include "boost_has_concepts.ipp"
#else
namespace boost_has_concepts = empty_boost;
#endif
#ifdef BOOST_HAS_DIRENT_H
#include "boost_has_dirent_h.ipp"
#else
namespace boost_has_dirent_h = empty_boost;
#endif
#ifdef BOOST_HAS_EXPM1
#include "boost_has_expm1.ipp"
#else
namespace boost_has_expm1 = empty_boost;
#endif
#ifdef BOOST_HAS_FTIME
#include "boost_has_ftime.ipp"
#else
namespace boost_has_ftime = empty_boost;
#endif
#ifdef BOOST_HAS_GETTIMEOFDAY
#include "boost_has_gettimeofday.ipp"
#else
namespace boost_has_gettimeofday = empty_boost;
#endif
#ifdef BOOST_HAS_HASH
#include "boost_has_hash.ipp"
#else
namespace boost_has_hash = empty_boost;
#endif
#ifdef BOOST_HAS_LOG1P
#include "boost_has_log1p.ipp"
#else
namespace boost_has_log1p = empty_boost;
#endif
#ifdef BOOST_HAS_LONG_LONG
#include "boost_has_long_long.ipp"
#else
namespace boost_has_long_long = empty_boost;
#endif
#ifdef BOOST_HAS_MACRO_USE_FACET
#include "boost_has_macro_use_facet.ipp"
#else
namespace boost_has_macro_use_facet = empty_boost;
#endif
#ifdef BOOST_HAS_MS_INT64
#include "boost_has_ms_int64.ipp"
#else
namespace boost_has_ms_int64 = empty_boost;
#endif
#ifdef BOOST_HAS_NANOSLEEP
#include "boost_has_nanosleep.ipp"
#else
namespace boost_has_nanosleep = empty_boost;
#endif
#ifdef BOOST_HAS_NL_TYPES_H
#include "boost_has_nl_types_h.ipp"
#else
namespace boost_has_nl_types_h = empty_boost;
#endif
#ifdef BOOST_HAS_NRVO
#include "boost_has_nrvo.ipp"
#else
namespace boost_has_nrvo = empty_boost;
#endif
#ifdef BOOST_HAS_PARTIAL_STD_ALLOCATOR
#include "boost_has_part_alloc.ipp"
#else
namespace boost_has_partial_std_allocator = empty_boost;
#endif
#ifdef BOOST_HAS_PTHREADS
#include "boost_has_pthreads.ipp"
#else
namespace boost_has_pthreads = empty_boost;
#endif
#ifdef BOOST_HAS_PTHREAD_DELAY_NP
#include "boost_has_pthread_delay_np.ipp"
#else
namespace boost_has_pthread_delay_np = empty_boost;
#endif
#ifdef BOOST_HAS_PTHREAD_MUTEXATTR_SETTYPE
#include "boost_has_pthread_ma_st.ipp"
#else
namespace boost_has_pthread_mutexattr_settype = empty_boost;
#endif
#ifdef BOOST_HAS_PTHREAD_YIELD
#include "boost_has_pthread_yield.ipp"
#else
namespace boost_has_pthread_yield = empty_boost;
#endif
#ifdef BOOST_HAS_RVALUE_REFS
#include "boost_has_rvalue_refs.ipp"
#else
namespace boost_has_rvalue_refs = empty_boost;
#endif
#ifdef BOOST_HAS_SCHED_YIELD
#include "boost_has_sched_yield.ipp"
#else
namespace boost_has_sched_yield = empty_boost;
#endif
#ifdef BOOST_HAS_SGI_TYPE_TRAITS
#include "boost_has_sgi_type_traits.ipp"
#else
namespace boost_has_sgi_type_traits = empty_boost;
#endif
#ifdef BOOST_HAS_SIGACTION
#include "boost_has_sigaction.ipp"
#else
namespace boost_has_sigaction = empty_boost;
#endif
#ifdef BOOST_HAS_SLIST
#include "boost_has_slist.ipp"
#else
namespace boost_has_slist = empty_boost;
#endif
#ifdef BOOST_HAS_STATIC_ASSERT
#include "boost_has_static_assert.ipp"
#else
namespace boost_has_static_assert = empty_boost;
#endif
#ifdef BOOST_HAS_STDINT_H
#include "boost_has_stdint_h.ipp"
#else
namespace boost_has_stdint_h = empty_boost;
#endif
#ifdef BOOST_HAS_STLP_USE_FACET
#include "boost_has_stlp_use_facet.ipp"
#else
namespace boost_has_stlp_use_facet = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_ARRAY
#include "boost_has_tr1_array.ipp"
#else
namespace boost_has_tr1_array = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_BIND
#include "boost_has_tr1_bind.ipp"
#else
namespace boost_has_tr1_bind = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_COMPLEX_OVERLOADS
#include "boost_has_tr1_complex_over.ipp"
#else
namespace boost_has_tr1_complex_overloads = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_COMPLEX_INVERSE_TRIG
#include "boost_has_tr1_complex_trig.ipp"
#else
namespace boost_has_tr1_complex_inverse_trig = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_FUNCTION
#include "boost_has_tr1_function.ipp"
#else
namespace boost_has_tr1_function = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_HASH
#include "boost_has_tr1_hash.ipp"
#else
namespace boost_has_tr1_hash = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_MEM_FN
#include "boost_has_tr1_mem_fn.ipp"
#else
namespace boost_has_tr1_mem_fn = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_RANDOM
#include "boost_has_tr1_random.ipp"
#else
namespace boost_has_tr1_random = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_REFERENCE_WRAPPER
#include "boost_has_tr1_ref_wrap.ipp"
#else
namespace boost_has_tr1_reference_wrapper = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_REGEX
#include "boost_has_tr1_regex.ipp"
#else
namespace boost_has_tr1_regex = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_RESULT_OF
#include "boost_has_tr1_result_of.ipp"
#else
namespace boost_has_tr1_result_of = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_SHARED_PTR
#include "boost_has_tr1_shared_ptr.ipp"
#else
namespace boost_has_tr1_shared_ptr = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_TUPLE
#include "boost_has_tr1_tuple.ipp"
#else
namespace boost_has_tr1_tuple = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_TYPE_TRAITS
#include "boost_has_tr1_type_traits.ipp"
#else
namespace boost_has_tr1_type_traits = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_UNORDERED_MAP
#include "boost_has_tr1_unordered_map.ipp"
#else
namespace boost_has_tr1_unordered_map = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_UNORDERED_SET
#include "boost_has_tr1_unordered_set.ipp"
#else
namespace boost_has_tr1_unordered_set = empty_boost;
#endif
#ifdef BOOST_HAS_TR1_UTILITY
#include "boost_has_tr1_utility.ipp"
#else
namespace boost_has_tr1_utility = empty_boost;
#endif
#ifdef BOOST_HAS_UNISTD_H
#include "boost_has_unistd_h.ipp"
#else
namespace boost_has_unistd_h = empty_boost;
#endif
#ifdef BOOST_HAS_VARIADIC_TMPL
#include "boost_has_variadic_tmpl.ipp"
#else
namespace boost_has_variadic_tmpl = empty_boost;
#endif
#ifdef BOOST_MSVC6_MEMBER_TEMPLATES
#include "boost_has_vc6_mem_templ.ipp"
#else
namespace boost_msvc6_member_templates = empty_boost;
#endif
#ifdef BOOST_MSVC_STD_ITERATOR
#include "boost_has_vc_iterator.ipp"
#else
namespace boost_msvc_std_iterator = empty_boost;
#endif
#ifdef BOOST_HAS_WINTHREADS
#include "boost_has_winthreads.ipp"
#else
namespace boost_has_winthreads = empty_boost;
#endif

int main( int, char *[] )
{
   if(0 != boost_has_two_arg_use_facet::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TWO_ARG_USE_FACET at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_bethreads::test())
   {
      std::cerr << "Failed test for BOOST_HAS_BETHREADS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_clock_gettime::test())
   {
      std::cerr << "Failed test for BOOST_HAS_CLOCK_GETTIME at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_concepts::test())
   {
      std::cerr << "Failed test for BOOST_HAS_CONCEPTS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_dirent_h::test())
   {
      std::cerr << "Failed test for BOOST_HAS_DIRENT_H at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_expm1::test())
   {
      std::cerr << "Failed test for BOOST_HAS_EXPM1 at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_ftime::test())
   {
      std::cerr << "Failed test for BOOST_HAS_FTIME at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_gettimeofday::test())
   {
      std::cerr << "Failed test for BOOST_HAS_GETTIMEOFDAY at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_hash::test())
   {
      std::cerr << "Failed test for BOOST_HAS_HASH at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_log1p::test())
   {
      std::cerr << "Failed test for BOOST_HAS_LOG1P at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_long_long::test())
   {
      std::cerr << "Failed test for BOOST_HAS_LONG_LONG at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_macro_use_facet::test())
   {
      std::cerr << "Failed test for BOOST_HAS_MACRO_USE_FACET at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_ms_int64::test())
   {
      std::cerr << "Failed test for BOOST_HAS_MS_INT64 at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_nanosleep::test())
   {
      std::cerr << "Failed test for BOOST_HAS_NANOSLEEP at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_nl_types_h::test())
   {
      std::cerr << "Failed test for BOOST_HAS_NL_TYPES_H at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_nrvo::test())
   {
      std::cerr << "Failed test for BOOST_HAS_NRVO at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_partial_std_allocator::test())
   {
      std::cerr << "Failed test for BOOST_HAS_PARTIAL_STD_ALLOCATOR at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_pthreads::test())
   {
      std::cerr << "Failed test for BOOST_HAS_PTHREADS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_pthread_delay_np::test())
   {
      std::cerr << "Failed test for BOOST_HAS_PTHREAD_DELAY_NP at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_pthread_mutexattr_settype::test())
   {
      std::cerr << "Failed test for BOOST_HAS_PTHREAD_MUTEXATTR_SETTYPE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_pthread_yield::test())
   {
      std::cerr << "Failed test for BOOST_HAS_PTHREAD_YIELD at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_rvalue_refs::test())
   {
      std::cerr << "Failed test for BOOST_HAS_RVALUE_REFS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_sched_yield::test())
   {
      std::cerr << "Failed test for BOOST_HAS_SCHED_YIELD at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_sgi_type_traits::test())
   {
      std::cerr << "Failed test for BOOST_HAS_SGI_TYPE_TRAITS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_sigaction::test())
   {
      std::cerr << "Failed test for BOOST_HAS_SIGACTION at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_slist::test())
   {
      std::cerr << "Failed test for BOOST_HAS_SLIST at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_static_assert::test())
   {
      std::cerr << "Failed test for BOOST_HAS_STATIC_ASSERT at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_stdint_h::test())
   {
      std::cerr << "Failed test for BOOST_HAS_STDINT_H at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_stlp_use_facet::test())
   {
      std::cerr << "Failed test for BOOST_HAS_STLP_USE_FACET at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_array::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_ARRAY at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_bind::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_BIND at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_complex_overloads::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_COMPLEX_OVERLOADS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_complex_inverse_trig::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_COMPLEX_INVERSE_TRIG at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_function::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_FUNCTION at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_hash::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_HASH at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_mem_fn::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_MEM_FN at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_random::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_RANDOM at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_reference_wrapper::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_REFERENCE_WRAPPER at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_regex::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_REGEX at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_result_of::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_RESULT_OF at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_shared_ptr::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_SHARED_PTR at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_tuple::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_TUPLE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_type_traits::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_TYPE_TRAITS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_unordered_map::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_UNORDERED_MAP at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_unordered_set::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_UNORDERED_SET at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_tr1_utility::test())
   {
      std::cerr << "Failed test for BOOST_HAS_TR1_UTILITY at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_unistd_h::test())
   {
      std::cerr << "Failed test for BOOST_HAS_UNISTD_H at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_variadic_tmpl::test())
   {
      std::cerr << "Failed test for BOOST_HAS_VARIADIC_TMPL at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_msvc6_member_templates::test())
   {
      std::cerr << "Failed test for BOOST_MSVC6_MEMBER_TEMPLATES at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_msvc_std_iterator::test())
   {
      std::cerr << "Failed test for BOOST_MSVC_STD_ITERATOR at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_has_winthreads::test())
   {
      std::cerr << "Failed test for BOOST_HAS_WINTHREADS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_adl_barrier::test())
   {
      std::cerr << "Failed test for BOOST_NO_ADL_BARRIER at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_argument_dependent_lookup::test())
   {
      std::cerr << "Failed test for BOOST_NO_ARGUMENT_DEPENDENT_LOOKUP at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_array_type_specializations::test())
   {
      std::cerr << "Failed test for BOOST_NO_ARRAY_TYPE_SPECIALIZATIONS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_auto_ptr::test())
   {
      std::cerr << "Failed test for BOOST_NO_AUTO_PTR at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_bcb_partial_specialization_bug::test())
   {
      std::cerr << "Failed test for BOOST_BCB_PARTIAL_SPECIALIZATION_BUG at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_ctype_functions::test())
   {
      std::cerr << "Failed test for BOOST_NO_CTYPE_FUNCTIONS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_cv_specializations::test())
   {
      std::cerr << "Failed test for BOOST_NO_CV_SPECIALIZATIONS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_cv_void_specializations::test())
   {
      std::cerr << "Failed test for BOOST_NO_CV_VOID_SPECIALIZATIONS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_cwchar::test())
   {
      std::cerr << "Failed test for BOOST_NO_CWCHAR at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_cwctype::test())
   {
      std::cerr << "Failed test for BOOST_NO_CWCTYPE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_deduced_typename::test())
   {
      std::cerr << "Failed test for BOOST_DEDUCED_TYPENAME at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_dependent_nested_derivations::test())
   {
      std::cerr << "Failed test for BOOST_NO_DEPENDENT_NESTED_DERIVATIONS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_dependent_types_in_template_value_parameters::test())
   {
      std::cerr << "Failed test for BOOST_NO_DEPENDENT_TYPES_IN_TEMPLATE_VALUE_PARAMETERS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_exceptions::test())
   {
      std::cerr << "Failed test for BOOST_NO_EXCEPTIONS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_exception_std_namespace::test())
   {
      std::cerr << "Failed test for BOOST_NO_EXCEPTION_STD_NAMESPACE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_explicit_function_template_arguments::test())
   {
      std::cerr << "Failed test for BOOST_NO_EXPLICIT_FUNCTION_TEMPLATE_ARGUMENTS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_function_type_specializations::test())
   {
      std::cerr << "Failed test for BOOST_NO_FUNCTION_TYPE_SPECIALIZATIONS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_function_template_ordering::test())
   {
      std::cerr << "Failed test for BOOST_NO_FUNCTION_TEMPLATE_ORDERING at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_ms_int64_numeric_limits::test())
   {
      std::cerr << "Failed test for BOOST_NO_MS_INT64_NUMERIC_LIMITS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_inclass_member_initialization::test())
   {
      std::cerr << "Failed test for BOOST_NO_INCLASS_MEMBER_INITIALIZATION at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_integral_int64_t::test())
   {
      std::cerr << "Failed test for BOOST_NO_INTEGRAL_INT64_T at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_iosfwd::test())
   {
      std::cerr << "Failed test for BOOST_NO_IOSFWD at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_iostream::test())
   {
      std::cerr << "Failed test for BOOST_NO_IOSTREAM at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_is_abstract::test())
   {
      std::cerr << "Failed test for BOOST_NO_IS_ABSTRACT at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_templated_iterator_constructors::test())
   {
      std::cerr << "Failed test for BOOST_NO_TEMPLATED_ITERATOR_CONSTRUCTORS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_limits::test())
   {
      std::cerr << "Failed test for BOOST_NO_LIMITS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_limits_compile_time_constants::test())
   {
      std::cerr << "Failed test for BOOST_NO_LIMITS_COMPILE_TIME_CONSTANTS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_long_long_numeric_limits::test())
   {
      std::cerr << "Failed test for BOOST_NO_LONG_LONG_NUMERIC_LIMITS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_member_function_specializations::test())
   {
      std::cerr << "Failed test for BOOST_NO_MEMBER_FUNCTION_SPECIALIZATIONS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_member_templates::test())
   {
      std::cerr << "Failed test for BOOST_NO_MEMBER_TEMPLATES at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_member_template_friends::test())
   {
      std::cerr << "Failed test for BOOST_NO_MEMBER_TEMPLATE_FRIENDS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_member_template_keyword::test())
   {
      std::cerr << "Failed test for BOOST_NO_MEMBER_TEMPLATE_KEYWORD at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_pointer_to_member_template_parameters::test())
   {
      std::cerr << "Failed test for BOOST_NO_POINTER_TO_MEMBER_TEMPLATE_PARAMETERS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_nested_friendship::test())
   {
      std::cerr << "Failed test for BOOST_NO_NESTED_FRIENDSHIP at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_operators_in_namespace::test())
   {
      std::cerr << "Failed test for BOOST_NO_OPERATORS_IN_NAMESPACE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_template_partial_specialization::test())
   {
      std::cerr << "Failed test for BOOST_NO_TEMPLATE_PARTIAL_SPECIALIZATION at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_partial_specialization_implicit_default_args::test())
   {
      std::cerr << "Failed test for BOOST_NO_PARTIAL_SPECIALIZATION_IMPLICIT_DEFAULT_ARGS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_private_in_aggregate::test())
   {
      std::cerr << "Failed test for BOOST_NO_PRIVATE_IN_AGGREGATE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_pointer_to_member_const::test())
   {
      std::cerr << "Failed test for BOOST_NO_POINTER_TO_MEMBER_CONST at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_unreachable_return_detection::test())
   {
      std::cerr << "Failed test for BOOST_NO_UNREACHABLE_RETURN_DETECTION at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_rtti::test())
   {
      std::cerr << "Failed test for BOOST_NO_RTTI at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_sfinae::test())
   {
      std::cerr << "Failed test for BOOST_NO_SFINAE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_stringstream::test())
   {
      std::cerr << "Failed test for BOOST_NO_STRINGSTREAM at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_stdc_namespace::test())
   {
      std::cerr << "Failed test for BOOST_NO_STDC_NAMESPACE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_allocator::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_ALLOCATOR at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_distance::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_DISTANCE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_iterator::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_ITERATOR at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_iterator_traits::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_ITERATOR_TRAITS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_locale::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_LOCALE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_messages::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_MESSAGES at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_min_max::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_MIN_MAX at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_output_iterator_assign::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_OUTPUT_ITERATOR_ASSIGN at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_typeinfo::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_TYPEINFO at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_use_facet::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_USE_FACET at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_wstreambuf::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_WSTREAMBUF at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_std_wstring::test())
   {
      std::cerr << "Failed test for BOOST_NO_STD_WSTRING at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_swprintf::test())
   {
      std::cerr << "Failed test for BOOST_NO_SWPRINTF at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_templated_iostreams::test())
   {
      std::cerr << "Failed test for BOOST_NO_TEMPLATED_IOSTREAMS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_template_templates::test())
   {
      std::cerr << "Failed test for BOOST_NO_TEMPLATE_TEMPLATES at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_two_phase_name_lookup::test())
   {
      std::cerr << "Failed test for BOOST_NO_TWO_PHASE_NAME_LOOKUP at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_typeid::test())
   {
      std::cerr << "Failed test for BOOST_NO_TYPEID at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_typename_with_ctor::test())
   {
      std::cerr << "Failed test for BOOST_NO_TYPENAME_WITH_CTOR at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_function_scope_using_declaration_breaks_adl::test())
   {
      std::cerr << "Failed test for BOOST_FUNCTION_SCOPE_USING_DECLARATION_BREAKS_ADL at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_using_declaration_overloads_from_typename_base::test())
   {
      std::cerr << "Failed test for BOOST_NO_USING_DECLARATION_OVERLOADS_FROM_TYPENAME_BASE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_using_template::test())
   {
      std::cerr << "Failed test for BOOST_NO_USING_TEMPLATE at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_void_returns::test())
   {
      std::cerr << "Failed test for BOOST_NO_VOID_RETURNS at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   if(0 != boost_no_intrinsic_wchar_t::test())
   {
      std::cerr << "Failed test for BOOST_NO_INTRINSIC_WCHAR_T at: " << __FILE__ << ":" << __LINE__ << std::endl;
      ++error_count;
   }
   return error_count;
}

