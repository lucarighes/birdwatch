#ifndef org_apache_lucene_codecs_idversion_IDVersionPostingsFormat_H
#define org_apache_lucene_codecs_idversion_IDVersionPostingsFormat_H

#include "org/apache/lucene/codecs/PostingsFormat.h"

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
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace util {
        class BytesRef;
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
        namespace idversion {

          class IDVersionPostingsFormat : public ::org::apache::lucene::codecs::PostingsFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_init$_438c62480c481c65,
              mid_bytesToLong_6f6ee5bba7f22d4c,
              mid_fieldsConsumer_876dc181a1f61814,
              mid_fieldsProducer_c39bdf540a53fab9,
              mid_longToBytes_bb31f0f903c30c55,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit IDVersionPostingsFormat(jobject obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            IDVersionPostingsFormat(const IDVersionPostingsFormat& obj) : ::org::apache::lucene::codecs::PostingsFormat(obj) {}

            static jlong MAX_VERSION;
            static jlong MIN_VERSION;

            IDVersionPostingsFormat();
            IDVersionPostingsFormat(jint, jint);

            static jlong bytesToLong(const ::org::apache::lucene::util::BytesRef &);
            ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
            static void longToBytes(jlong, const ::org::apache::lucene::util::BytesRef &);
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
        namespace idversion {
          extern PyType_Def PY_TYPE_DEF(IDVersionPostingsFormat);
          extern PyTypeObject *PY_TYPE(IDVersionPostingsFormat);

          class t_IDVersionPostingsFormat {
          public:
            PyObject_HEAD
            IDVersionPostingsFormat object;
            static PyObject *wrap_Object(const IDVersionPostingsFormat&);
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
