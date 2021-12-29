#ifndef org_apache_lucene_collation_tokenattributes_CollatedTermAttributeImpl_H
#define org_apache_lucene_collation_tokenattributes_CollatedTermAttributeImpl_H

#include "org/apache/lucene/analysis/tokenattributes/CharTermAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class BytesRef;
      }
    }
  }
}
namespace java {
  namespace text {
    class Collator;
  }
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace collation {
        namespace tokenattributes {

          class CollatedTermAttributeImpl : public ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl {
           public:
            enum {
              mid_init$_5752a611d0e456db,
              mid_getBytesRef_7af2ea2e37ce82b8,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CollatedTermAttributeImpl(jobject obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CollatedTermAttributeImpl(const CollatedTermAttributeImpl& obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {}

            CollatedTermAttributeImpl(const ::java::text::Collator &);

            ::org::apache::lucene::util::BytesRef getBytesRef() const;
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
      namespace collation {
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(CollatedTermAttributeImpl);
          extern PyTypeObject *PY_TYPE(CollatedTermAttributeImpl);

          class t_CollatedTermAttributeImpl {
          public:
            PyObject_HEAD
            CollatedTermAttributeImpl object;
            static PyObject *wrap_Object(const CollatedTermAttributeImpl&);
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
