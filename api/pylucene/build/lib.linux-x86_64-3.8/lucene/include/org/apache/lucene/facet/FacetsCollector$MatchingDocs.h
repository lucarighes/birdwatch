#ifndef org_apache_lucene_facet_FacetsCollector$MatchingDocs_H
#define org_apache_lucene_facet_FacetsCollector$MatchingDocs_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSet;
      }
      namespace index {
        class LeafReaderContext;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace facet {

        class FacetsCollector$MatchingDocs : public ::java::lang::Object {
         public:
          enum {
            mid_init$_0d2f49a30dd6653b,
            max_mid
          };

          enum {
            fid_bits,
            fid_context,
            fid_scores,
            fid_totalHits,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FacetsCollector$MatchingDocs(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FacetsCollector$MatchingDocs(const FacetsCollector$MatchingDocs& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::DocIdSet _get_bits() const;
          ::org::apache::lucene::index::LeafReaderContext _get_context() const;
          JArray< jfloat > _get_scores() const;
          jint _get_totalHits() const;

          FacetsCollector$MatchingDocs(const ::org::apache::lucene::index::LeafReaderContext &, const ::org::apache::lucene::search::DocIdSet &, jint, const JArray< jfloat > &);
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
        extern PyType_Def PY_TYPE_DEF(FacetsCollector$MatchingDocs);
        extern PyTypeObject *PY_TYPE(FacetsCollector$MatchingDocs);

        class t_FacetsCollector$MatchingDocs {
        public:
          PyObject_HEAD
          FacetsCollector$MatchingDocs object;
          static PyObject *wrap_Object(const FacetsCollector$MatchingDocs&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
