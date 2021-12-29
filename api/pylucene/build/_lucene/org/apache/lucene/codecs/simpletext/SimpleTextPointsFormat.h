#ifndef org_apache_lucene_codecs_simpletext_SimpleTextPointsFormat_H
#define org_apache_lucene_codecs_simpletext_SimpleTextPointsFormat_H

#include "org/apache/lucene/codecs/PointsFormat.h"

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
      namespace codecs {
        class PointsWriter;
        class PointsReader;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace simpletext {

          class SimpleTextPointsFormat : public ::org::apache::lucene::codecs::PointsFormat {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_fieldsReader_8abb687068409d66,
              mid_fieldsWriter_e285a7edd004a5e4,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextPointsFormat(jobject obj) : ::org::apache::lucene::codecs::PointsFormat(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextPointsFormat(const SimpleTextPointsFormat& obj) : ::org::apache::lucene::codecs::PointsFormat(obj) {}

            SimpleTextPointsFormat();

            ::org::apache::lucene::codecs::PointsReader fieldsReader(const ::org::apache::lucene::index::SegmentReadState &) const;
            ::org::apache::lucene::codecs::PointsWriter fieldsWriter(const ::org::apache::lucene::index::SegmentWriteState &) const;
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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextPointsFormat);
          extern PyTypeObject *PY_TYPE(SimpleTextPointsFormat);

          class t_SimpleTextPointsFormat {
          public:
            PyObject_HEAD
            SimpleTextPointsFormat object;
            static PyObject *wrap_Object(const SimpleTextPointsFormat&);
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
