#ifndef LIBWFA_EXPORT_CUBE_I_H
#define LIBWFA_EXPORT_CUBE_I_H

#include <armadillo>
#include <string>
#include <vector>

namespace libwfa {


/** \brief Interface class to export data as Gaussian cube files.

    \ingroup libwfa
 **/
class export_cube_i {
public:
    /** \brief Destructor
     **/
    virtual ~export_cube_i() {}

    /** \brief Schedule density matrix for evaluation on a grid
        \param name Name associated with the matrix (use as filename)
        \param desc Description of the matrix (use as comment line)
        \param mat Density matrix in terms of basis functions
        \param do_esp Switch for ESP. 0 - no ESP, 1 - only elec ESP, 2 - elec/nuc ESP
     **/
    virtual void perform(const std::string &name, const std::string &desc,
        const arma::mat &mat, int do_esp=0) = 0;

    /** \brief Schedule set of vectors for evaluation on a grid
        \param name Name associated with the vectors (use as filename)
        \param desc Description of the vectors (use as comment line)
        \param idx Index list of orbitals to be exported
        \param vecs Set of vectors in basis functions (column vectors)
     **/
    virtual void perform(const std::string &name, const std::string &desc,
        const std::vector<size_t> &idx, const arma::mat &vecs) = 0;
};


} // namespace libwfa

#endif // LIBWFA_EXPORT_CUBE_I_H
