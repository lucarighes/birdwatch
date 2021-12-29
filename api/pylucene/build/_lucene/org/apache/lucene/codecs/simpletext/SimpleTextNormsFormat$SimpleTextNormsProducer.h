#ifndef org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat$SimpleTextNormsProducer_H
#define org_apache_lucene_codecs_simpletext_SimpleTextNormsFormat$SimpleTextNormsProducer_H

#include "org/apache/lucene/codecs/NormsProducer.h"

namespace java {
  namespace util {
    class Collection;
  }
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
      namespace util {
        class Accountable;
      }
      namespace index {
        class SegmentReadState;
        class NumericDocValues;
        class FieldInfo;
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

          class SimpleTextNormsFormat$SimpleTextNormsProducer : public ::org::apache::lucene::codecs::NormsProducer {
           public:
            enum {
              mid_init$_363fedc32cc1a1cf,
              mid_checkIntegrity_f2cc1bce94666404,
              mid_close_f2cc1bce94666404,
              mid_getChildResources_d4dfbf7a26ff41df,
              mid_getNorms_d63b818fc8746ddc,
              mid_ramBytesUsed_2e5ae9edcb9b072f,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SimpleTextNormsFormat$SimpleTextNormsProducer(jobject obj) : ::org::apache::lucene::codecs::NormsProducer(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SimpleTextNormsFormat$SimpleTextNormsProducer(const SimpleTextNormsFormat$SimpleTextNormsProducer& obj) : ::org::apache::lucene::codecs::NormsProducer(obj) {}

            SimpleTextNormsFormat$SimpleTextNormsProducer(const ::org::apache::lucene::index::SegmentReadState &);

            void checkIntegrity() const;
            void close() const;
            ::java::util::Collection getChildResources() const;
            ::org::apache::lucene::index::NumericDocValues getNorms(const ::org::apache::lucene::index::FieldInfo &) const;
            jlong ramBytesUsed() const;
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
        namespace simpletext {
          extern PyType_Def PY_TYPE_DEF(SimpleTextNormsFormat$SimpleTextNormsProducer);
          extern PyTypeObject *PY_TYPE(SimpleTextNormsFormat$SimpleTextNormsProducer);

          class t_SimpleTextNormsFormat$SimpleTextNormsProducer {
          public:
            PyObject_HEAD
            SimpleTextNormsFormat$SimpleTextNormsProducer object;
            static PyObject *wrap_Object(const SimpleTextNormsFormat$SimpleTextNormsProducer&);
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
