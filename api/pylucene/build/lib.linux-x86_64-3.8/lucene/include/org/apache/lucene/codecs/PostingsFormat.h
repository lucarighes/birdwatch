#ifndef org_apache_lucene_codecs_PostingsFormat_H
#define org_apache_lucene_codecs_PostingsFormat_H

#include "java/lang/Object.h"

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
        class PostingsFormat;
      }
      namespace util {
        class NamedSPILoader$NamedSPI;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {

        class PostingsFormat : public ::java::lang::Object {
         public:
          enum {
            mid_availablePostingsFormats_7dcf4034c6d1a92a,
            mid_fieldsConsumer_876dc181a1f61814,
            mid_fieldsProducer_c39bdf540a53fab9,
            mid_forName_62d8049c839a109a,
            mid_getName_db9b55ba01e03e4b,
            mid_reloadPostingsFormats_98a876e82795b112,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit PostingsFormat(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          PostingsFormat(const PostingsFormat& obj) : ::java::lang::Object(obj) {}

          static JArray< PostingsFormat > *EMPTY;

          static ::java::util::Set availablePostingsFormats();
          ::org::apache::lucene::codecs::FieldsConsumer fieldsConsumer(const ::org::apache::lucene::index::SegmentWriteState &) const;
          ::org::apache::lucene::codecs::FieldsProducer fieldsProducer(const ::org::apache::lucene::index::SegmentReadState &) const;
          static PostingsFormat forName(const ::java::lang::String &);
          ::java::lang::String getName() const;
          static void reloadPostingsFormats(const ::java::lang::ClassLoader &);
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
        extern PyType_Def PY_TYPE_DEF(PostingsFormat);
        extern PyTypeObject *PY_TYPE(PostingsFormat);

        class t_PostingsFormat {
        public:
          PyObject_HEAD
          PostingsFormat object;
          static PyObject *wrap_Object(const PostingsFormat&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
