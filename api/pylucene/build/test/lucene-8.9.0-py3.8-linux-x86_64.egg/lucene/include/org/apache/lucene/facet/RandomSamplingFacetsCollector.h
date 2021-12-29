#ifndef org_apache_lucene_facet_RandomSamplingFacetsCollector_H
#define org_apache_lucene_facet_RandomSamplingFacetsCollector_H

#include "org/apache/lucene/facet/FacetsCollector.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        class FacetResult;
        class FacetsConfig;
        class FacetsCollector$MatchingDocs;
      }
      namespace search {
        class IndexSearcher;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class RandomSamplingFacetsCollector : public ::org::apache::lucene::facet::FacetsCollector {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_init$_7b2f5b9ddfcb9416,
            mid_amortizeFacetCounts_cd94c830d122bbb4,
            mid_getMatchingDocs_49ec78390f08338a,
            mid_getOriginalMatchingDocs_49ec78390f08338a,
            mid_getSamplingRate_8c74b787998ce4bc,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RandomSamplingFacetsCollector(jobject obj) : ::org::apache::lucene::facet::FacetsCollector(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RandomSamplingFacetsCollector(const RandomSamplingFacetsCollector& obj) : ::org::apache::lucene::facet::FacetsCollector(obj) {}

          RandomSamplingFacetsCollector(jint);
          RandomSamplingFacetsCollector(jint, jlong);

          ::org::apache::lucene::facet::FacetResult amortizeFacetCounts(const ::org::apache::lucene::facet::FacetResult &, const ::org::apache::lucene::facet::FacetsConfig &, const ::org::apache::lucene::search::IndexSearcher &) const;
          ::java::util::List getMatchingDocs() const;
          ::java::util::List getOriginalMatchingDocs() const;
          jdouble getSamplingRate() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {
        extern PyType_Def PY_TYPE_DEF(RandomSamplingFacetsCollector);
        extern PyTypeObject *PY_TYPE(RandomSamplingFacetsCollector);

        class t_RandomSamplingFacetsCollector {
        public:
          PyObject_HEAD
          RandomSamplingFacetsCollector object;
          static PyObject *wrap_Object(const RandomSamplingFacetsCollector&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
