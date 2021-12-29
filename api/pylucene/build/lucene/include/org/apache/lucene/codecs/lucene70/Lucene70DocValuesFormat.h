#ifndef org_apache_lucene_codecs_lucene70_Lucene70DocValuesFormat_H
#define org_apache_lucene_codecs_lucene70_Lucene70DocValuesFormat_H

#include "org/apache/lucene/codecs/DocValuesFormat.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class DocValuesConsumer;
        class DocValuesProducer;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
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
        namespace lucene70 {

          class Lucene70DocValuesFormat : public ::org::apache::lucene::codecs::DocValuesFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_fieldsConsumer_4d0d89459a33e411,
              mid_fieldsProducer_4fca71c324f605dc,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene70DocValuesFormat(jobject obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene70DocValuesFormat(const Lucene70DocValuesFormat& obj) : ::org::apache::lucene::codecs::DocValuesFormat(obj) {}

            Lucene70DocValuesFormat();

            ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
            ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
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
        namespace lucene70 {
          extern PyType_Def PY_TYPE_DEF(Lucene70DocValuesFormat);
          extern PyTypeObject *PY_TYPE(Lucene70DocValuesFormat);

          class t_Lucene70DocValuesFormat {
          public:
            PyObject_HEAD
            Lucene70DocValuesFormat object;
            static PyObject *wrap_Object(const Lucene70DocValuesFormat&);
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
