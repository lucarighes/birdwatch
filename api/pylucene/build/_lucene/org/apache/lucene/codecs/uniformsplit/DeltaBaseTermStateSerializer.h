#ifndef org_apache_lucene_codecs_uniformsplit_DeltaBaseTermStateSerializer_H
#define org_apache_lucene_codecs_uniformsplit_DeltaBaseTermStateSerializer_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace store {
        class DataInput;
        class DataOutput;
      }
      namespace util {
        class Accountable;
      }
      namespace index {
        class TermState;
        class FieldInfo;
      }
      namespace codecs {
        class BlockTermState;
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
      namespace codecs {
        namespace uniformsplit {

          class DeltaBaseTermStateSerializer : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_getBaseDocStartFP_2e5ae9edcb9b072f,
              mid_getBasePayStartFP_2e5ae9edcb9b072f,
              mid_getBasePosStartFP_2e5ae9edcb9b072f,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_ramBytesUsed_48fe61a8eb679d1f,
              mid_readTermState_0afccee58487d7c8,
              mid_resetBaseStartFP_f2cc1bce94666404,
              mid_writeTermState_3b5e029ab7788170,
              mid_reset_11be21c1dbc2e5c5,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit DeltaBaseTermStateSerializer(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            DeltaBaseTermStateSerializer(const DeltaBaseTermStateSerializer& obj) : ::java::lang::Object(obj) {}

            DeltaBaseTermStateSerializer();

            jlong getBaseDocStartFP() const;
            jlong getBasePayStartFP() const;
            jlong getBasePosStartFP() const;
            jlong ramBytesUsed() const;
            static jlong ramBytesUsed(const ::org::apache::lucene::index::TermState &);
            ::org::apache::lucene::codecs::BlockTermState readTermState(jlong, jlong, jlong, const ::org::apache::lucene::store::DataInput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &) const;
            void resetBaseStartFP() const;
            void writeTermState(const ::org::apache::lucene::store::DataOutput &, const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::BlockTermState &) const;
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
      namespace codecs {
        namespace uniformsplit {
          extern PyType_Def PY_TYPE_DEF(DeltaBaseTermStateSerializer);
          extern PyTypeObject *PY_TYPE(DeltaBaseTermStateSerializer);

          class t_DeltaBaseTermStateSerializer {
          public:
            PyObject_HEAD
            DeltaBaseTermStateSerializer object;
            static PyObject *wrap_Object(const DeltaBaseTermStateSerializer&);
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
