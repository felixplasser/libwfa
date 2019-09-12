#ifndef LIBWFA_LIBWFA_SUITE_H
#define LIBWFA_LIBWFA_SUITE_H

#include <libtest/test_suite.h>
#include "ab_matrix_test.h"
#include "ab_vector_test.h"
#include "ctnum_analysis_test.h"
#include "ctnum_export_test.h"
#include "ctnumbers_test.h"
#include "cube_writer_test.h"
// include "density_type_test.h"
#include "exciton_analysis_ad_test.h"
#include "exciton_analysis_test.h"
#include "export_cube_base_test.h"
#include "grid3d_test.h"
#include "libwfa_exception_test.h"
#include "mom_builder_test.h"
#include "ndo_analysis_test.h"
#include "no_analysis_test.h"
#include "nto_analysis_test.h"
#include "orbital_data_test.h"
#include "orbital_selector_test.h"
// include "orbital_type_test.h"
#include "pop_analysis_ad_test.h"
#include "pop_analysis_dm_test.h"
#include "pop_data_test.h"
#include "pop_loewdin_test.h"
#include "pop_mulliken_test.h"
#include "sa_nto_analysis_test.h"
#include "selector_test.h"
#include "version_test.h"

using libtest::unit_test_factory;

/** \defgroup libwfa_tests Tests
    \ingroup libwfa
 **/

namespace libwfa {


/** \brief Test suite for the wfa library (libwfa)

    This suite runs the following tests:
    - \c ab_matrix_test
    - \c ab_vector_test
    - \c ctnum_analysis_test
    - \c ctnum_export_test
    - \c ctnumbers_test
    - \c cube_writer_test
    - \c density_type_test (NIY)
    - \c exciton_analysis_ad_test
    - \c exciton_analysis_test
    - \c export_cube_base_test
    - \c grid3d_test
    - \c libwfa_exception_test
    - \c mom_builder_test
    - \c ndo_analysis_test
    - \c no_analysis_test
    - \c nto_analysis_test
    - \c santo_analysis_test
    - \c orbital_data_test
    - \c orbital_selector_test
    - \c orbital_type_test (NIY)
    - \c pop_analysis_ad_test
    - \c pop_analysis_dm_test
    - \c pop_data_test
    - \c pop_loewdin_test
    - \c pop_mulliken_test
    - \c selector_test
    - \c version_test

    \ingroup libwfa_tests
 **/
class libwfa_suite: public libtest::test_suite {
private:
    unit_test_factory<ab_matrix_test> m_utf_ab_matrix;
    unit_test_factory<ab_vector_test> m_utf_ab_vector;
    unit_test_factory<ctnum_analysis_test> m_utf_ctnum_analysis;
    unit_test_factory<ctnum_export_test> m_utf_ctnum_export;
    unit_test_factory<ctnumbers_test> m_utf_ctnumbers;
    unit_test_factory<cube_writer_test> m_utf_cube_writer;
    //unit_test_factory<density_type_test> m_utf_density_type;
    unit_test_factory<exciton_analysis_ad_test> m_utf_exciton_analysis_ad_test;
    unit_test_factory<exciton_analysis_test> m_utf_exciton_analysis_test;
    unit_test_factory<export_cube_base_test> m_utf_export_cube_base;
    unit_test_factory<grid3d_test> m_utf_grid3d;
    unit_test_factory<libwfa_exception_test> m_utf_libwfa_exception;
    unit_test_factory<mom_builder_test> m_utf_mom_builder;
    unit_test_factory<ndo_analysis_test> m_utf_ndo_analysis;
    unit_test_factory<no_analysis_test> m_utf_no_analysis;
    unit_test_factory<nto_analysis_test> m_utf_nto_analysis;
    unit_test_factory<sa_nto_analysis_test> m_utf_sa_nto_analysis;
    unit_test_factory<orbital_data_test> m_utf_orbital_data;
    unit_test_factory<orbital_selector_test> m_utf_orbital_selector;
    //unit_test_factory<orbital_type_test> m_utf_orbital_type;
    unit_test_factory<pop_analysis_ad_test> m_utf_pop_analysis_ad;
    unit_test_factory<pop_analysis_dm_test> m_utf_pop_analysis_dm;
    unit_test_factory<pop_data_test> m_utf_pop_data;
    unit_test_factory<pop_loewdin_test> m_utf_pop_loewdin;
    unit_test_factory<pop_mulliken_test> m_utf_pop_mulliken;
    unit_test_factory<selector_test> m_utf_selector;
    unit_test_factory<version_test> m_utf_version;

public:
    //! Creates the suite
    libwfa_suite();

};


} // namespace libwfa

#endif // LIBWFA_LIBWFA_SUITE_H
