#ifndef org_apache_lucene_facet_range_DoubleRangeFacetCounts_H
#define org_apache_lucene_facet_range_DoubleRangeFacetCounts_H

#include "org/apache/lucene/facet/range/RangeFacetCounts.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetsCollector;
        namespace range {
          class DoubleRange;
        }
      }
      namespace search {
        class DoubleValuesSource;
        class Query;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {

          class DoubleRangeFacetCounts : public ::org::apache::lucene::facet::range::RangeFacetCounts {
           public:
            enum {
              mid_init$_036d2c52e7f475dc,
              mid_init$_cc190e2c30fe3399,
              mid_init$_1308f03dcc7d1849,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DoubleRangeFacetCounts(jobject obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DoubleRangeFacetCounts(const DoubleRangeFacetCounts& obj) : ::org::apache::lucene::facet::range::RangeFacetCounts(obj) {}

            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::DoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
            DoubleRangeFacetCounts(const ::java::lang::String &, const ::org::apache::lucene::search::DoubleValuesSource &, const ::org::apache::lucene::facet::FacetsCollector &, const ::org::apache::lucene::search::Query &, const JArray< ::org::apache::lucene::facet::range::DoubleRange > &);
          };
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        namespace range {
          extern PyType_Def PY_TYPE_DEF(DoubleRangeFacetCounts);
          extern PyTypeObject *PY_TYPE(DoubleRangeFacetCounts);

          class t_DoubleRangeFacetCounts {
          public:
            PyObject_HEAD
            DoubleRangeFacetCounts object;
            static PyObject *wrap_Object(const DoubleRangeFacetCounts&);
            static PyObject *wrap_jobject(const jobject&);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
