#ifndef SEGMENTS_INTERSECT_H
#define SEGMENTS_INTERSECT_H

#include <Eigen/Core>
#include <Eigen/Dense>
#include <igl/sortrows.h>
#include <vector>
#include <unordered_set>
#include <set>

// robustly test whether two 2d-segments intersect
template <typename DerivedV>
bool segment_segment_intersect(
    const Eigen::MatrixBase<DerivedV>& A,
    const Eigen::MatrixBase<DerivedV>& B,
    const Eigen::MatrixBase<DerivedV>& C,
    const Eigen::MatrixBase<DerivedV>& D,
    typename DerivedV::Scalar eps
);

template <typename DerivedV>
bool segment_segment_intersect(
    typename DerivedV::Scalar a[2], 
    typename DerivedV::Scalar b[2], 
    typename DerivedV::Scalar c[2], 
    typename DerivedV::Scalar d[2],
    typename DerivedV::Scalar eps
);

void test_segment_segment_intersect();

template <typename DerivedV>
short orientation(const Eigen::MatrixBase<DerivedV>& P);

#endif