#ifndef org_apache_lucene_codecs_lucene86_Lucene86PointsWriter_H
#define org_apache_lucene_codecs_lucene86_Lucene86PointsWriter_H

#include "org/apache/lucene/codecs/PointsWriter.h"

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
        class PointsReader;
      }
      namespace index {
        class SegmentWriteState;
        class FieldInfo;
        class MergeState;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        namespace lucene86 {

          class Lucene86PointsWriter : public ::org::apache::lucene::codecs::PointsWriter {
           public:
            enum {
              mid_init$_a108448a3f706d50,
              mid_init$_1f18935f2c6e61fd,
              mid_close_f2cc1bce94666404,
              mid_finish_f2cc1bce94666404,
              mid_merge_747cb13f783c9b42,
              mid_writeField_1dd305600f855cd6,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit Lucene86PointsWriter(jobject obj) : ::org::apache::lucene::codecs::PointsWriter(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            Lucene86PointsWriter(const Lucene86PointsWriter& obj) : ::org::apache::lucene::codecs::PointsWriter(obj) {}

            Lucene86PointsWriter(const ::org::apache::lucene::index::SegmentWriteState &);
            Lucene86PointsWriter(const ::org::apache::lucene::index::SegmentWriteState &, jint, jdouble);

            void close() const;
            void finish() const;
            void merge(const ::org::apache::lucene::index::MergeState &) const;
            void writeField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::PointsReader &) const;
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
        namespace lucene86 {
          extern PyType_Def PY_TYPE_DEF(Lucene86PointsWriter);
          extern PyTypeObject *PY_TYPE(Lucene86PointsWriter);

          class t_Lucene86PointsWriter {
          public:
            PyObject_HEAD
            Lucene86PointsWriter object;
            static PyObject *wrap_Object(const Lucene86PointsWriter&);
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
