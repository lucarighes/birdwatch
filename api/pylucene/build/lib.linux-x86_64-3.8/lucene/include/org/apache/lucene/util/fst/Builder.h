#ifndef org_apache_lucene_util_fst_Builder_H
#define org_apache_lucene_util_fst_Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        class IntsRef;
        namespace fst {
          class Builder;
          class FST;
          class FST$INPUT_TYPE;
          class Outputs;
        }
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
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace util {
        namespace fst {

          class Builder : public ::java::lang::Object {
           public:
            enum {
              mid_init$_9b58e621b91baa4b,
              mid_init$_ae0f1759ff0dd1ee,
              mid_add_172a8deac16a5c3a,
              mid_finish_a74bf1c7da47b631,
              mid_fstRamBytesUsed_2e5ae9edcb9b072f,
              mid_getArcCount_2e5ae9edcb9b072f,
              mid_getDirectAddressingMaxOversizingFactor_58aec2b64dff50c8,
              mid_getMappedStateCount_2e5ae9edcb9b072f,
              mid_getNodeCount_2e5ae9edcb9b072f,
              mid_getTermCount_2e5ae9edcb9b072f,
              mid_setDirectAddressingMaxOversizingFactor_14e56a5ff923d76d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Builder(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Builder(const Builder& obj) : ::java::lang::Object(obj) {}

            Builder(const ::org::apache::lucene::util::fst::FST$INPUT_TYPE &, const ::org::apache::lucene::util::fst::Outputs &);
            Builder(const ::org::apache::lucene::util::fst::FST$INPUT_TYPE &, jint, jint, jboolean, jboolean, jint, const ::org::apache::lucene::util::fst::Outputs &, jboolean, jint);

            void add(const ::org::apache::lucene::util::IntsRef &, const ::java::lang::Object &) const;
            ::org::apache::lucene::util::fst::FST finish() const;
            jlong fstRamBytesUsed() const;
            jlong getArcCount() const;
            jfloat getDirectAddressingMaxOversizingFactor() const;
            jlong getMappedStateCount() const;
            jlong getNodeCount() const;
            jlong getTermCount() const;
            Builder setDirectAddressingMaxOversizingFactor(jfloat) const;
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
        namespace fst {
          extern PyType_Def PY_TYPE_DEF(Builder);
          extern PyTypeObject *PY_TYPE(Builder);

          class t_Builder {
          public:
            PyObject_HEAD
            Builder object;
            PyTypeObject *parameters[1];
            static PyTypeObject **parameters_(t_Builder *self)
            {
              return (PyTypeObject **) &(self->parameters);
            }
            static PyObject *wrap_Object(const Builder&);
            static PyObject *wrap_jobject(const jobject&);
            static PyObject *wrap_Object(const Builder&, PyTypeObject *);
            static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
            static void install(PyObject *module);
            static void initialize(PyObject *module);
          };
        }
      }
    }
  }
}

#endif
