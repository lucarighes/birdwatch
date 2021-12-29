#ifndef org_apache_lucene_util_bkd_BKDReader$IntersectState_H
#define org_apache_lucene_util_bkd_BKDReader$IntersectState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class PointValues$IntersectVisitor;
      }
      namespace store {
        class IndexInput;
      }
      namespace util {
        namespace bkd {
          class BKDConfig;
          class BKDReader$IndexTree;
        }
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
      namespace util {
        namespace bkd {

          class BKDReader$IntersectState : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9b617607d47955fb,
              max_mid
            };

            enum {
              fid_index,
              max_fid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static jfieldID *fids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit BKDReader$IntersectState(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            BKDReader$IntersectState(const BKDReader$IntersectState& obj) : ::java::lang::Object(obj) {}

            ::org::apache::lucene::util::bkd::BKDReader$IndexTree _get_index() const;

            BKDReader$IntersectState(const ::org::apache::lucene::store::IndexInput &, const ::org::apache::lucene::util::bkd::BKDConfig &, const ::org::apache::lucene::index::PointValues$IntersectVisitor &, const ::org::apache::lucene::util::bkd::BKDReader$IndexTree &);
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
      namespace util {
        namespace bkd {
          extern PyType_Def PY_TYPE_DEF(BKDReader$IntersectState);
          extern PyTypeObject *PY_TYPE(BKDReader$IntersectState);

          class t_BKDReader$IntersectState {
          public:
            PyObject_HEAD
            BKDReader$IntersectState object;
            static PyObject *wrap_Object(const BKDReader$IntersectState&);
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
