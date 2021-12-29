#ifndef org_apache_lucene_codecs_lucene84_Lucene84PostingsFormat_H
#define org_apache_lucene_codecs_lucene84_Lucene84PostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

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
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace codecs {
        class FieldsConsumer;
        class FieldsProducer;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene84 {

          class Lucene84PostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_438c62480c481c65,
              mid_fieldsConsumer_876dc181a1f61814,
              mid_fieldsProducer_c39bdf540a53fab9,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene84PostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene84PostingsFormat(const Lucene84PostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static jint BLOCK_SIZE;
            static ::java::lang::String *DOC_EXTENSION;
            static ::java::lang::String *PAY_EXTENSION;
            static ::java::lang::String *POS_EXTENSION;

            Lucene84PostingsFormat();
            Lucene84PostingsFormat(jint, jint);

            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::java::lang::String toString() const;
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
        namespace lucene84 {
          extern PyType_Def PY_TYPE_DEF(Lucene84PostingsFormat);
          extern PyTypeObject *PY_TYPE(Lucene84PostingsFormat);

          class t_Lucene84PostingsFormat {
          public:
            PyObject_HEAD
            Lucene84PostingsFormat object;
            static PyObject *wrap_Object(const Lucene84PostingsFormat&);
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
