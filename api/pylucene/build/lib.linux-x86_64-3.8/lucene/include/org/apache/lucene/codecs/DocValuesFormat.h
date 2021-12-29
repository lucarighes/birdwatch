#ifndef org_apache_lucene_codecs_DocValuesFormat_H
#define org_apache_lucene_codecs_DocValuesFormat_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class DocValuesConsumer;
        class DocValuesFormat;
        class DocValuesProducer;
      }
      namespace index {
        class SegmentReadState;
        class SegmentWriteState;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
    class ClassLoader;
  }
  namespace util {
    class Set;
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

        class DocValuesFormat : public ::java::lang::Object {
         public:
          enum {
            mid_availableDocValuesFormats_7dcf4034c6d1a92a,
            mid_fieldsConsumer_4d0d89459a33e411,
            mid_fieldsProducer_4fca71c324f605dc,
            mid_forName_6b92af620136a934,
            mid_getName_db9b55ba01e03e4b,
            mid_reloadDocValuesFormats_98a876e82795b112,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesFormat(const DocValuesFormat& obj) : ::java::lang::Object(obj) {}

          static ::java::util::Set availableDocValuesFormats();
          ::org::apache::lucene::codecs::DocValuesConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
          ::org::apache::lucene::codecs::DocValuesProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
          static DocValuesFormat forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          static void reloadDocValuesFormats(const ::java::lang::ClassLoader &);
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        extern PyType_Def PY_TYPE_DEF(DocValuesFormat);
        extern PyTypeObject *PY_TYPE(DocValuesFormat);

        class t_DocValuesFormat {
        public:
          PyObject_HEAD
          DocValuesFormat object;
          static PyObject *wrap_Object(const DocValuesFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
