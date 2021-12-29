#ifndef org_apache_lucene_util_RoaringDocIdSet$Builder_H
#define org_apache_lucene_util_RoaringDocIdSet$Builder_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class DocIdSetIterator;
      }
      namespace util {
        class RoaringDocIdSet;
        class RoaringDocIdSet$Builder;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {

        class RoaringDocIdSet$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_040c4cd0390c5aff,
            mid_add_0e5bfa131d98bc47,
            mid_add_210fa47068b51280,
            mid_build_f149c9d6bd244979,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit RoaringDocIdSet$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          RoaringDocIdSet$Builder(const RoaringDocIdSet$Builder& obj) : ::java::lang::Object(obj) {}

          RoaringDocIdSet$Builder(jint);

          RoaringDocIdSet$Builder add(const ::org::apache::lucene::search::DocIdSetIterator &) const;
          RoaringDocIdSet$Builder add(jint) const;
          ::org::apache::lucene::util::RoaringDocIdSet build() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        extern PyType_Def PY_TYPE_DEF(RoaringDocIdSet$Builder);
        extern PyTypeObject *PY_TYPE(RoaringDocIdSet$Builder);

        class t_RoaringDocIdSet$Builder {
        public:
          PyObject_HEAD
          RoaringDocIdSet$Builder object;
          static PyObject *wrap_Object(const RoaringDocIdSet$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
