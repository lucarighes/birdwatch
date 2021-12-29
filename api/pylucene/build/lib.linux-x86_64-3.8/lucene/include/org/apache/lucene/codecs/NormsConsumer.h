#ifndef org_apache_lucene_codecs_NormsConsumer_H
#define org_apache_lucene_codecs_NormsConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class Closeable;
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace codecs {
        class NormsProducer;
      }
      namespace index {
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

        class NormsConsumer : public ::java::lang::Object {
         public:
          enum {
            mid_addNormsField_5c2ab8fdd065173d,
            mid_merge_747cb13f783c9b42,
            mid_mergeNormsField_b32f9072de285d65,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit NormsConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          NormsConsumer(const NormsConsumer& obj) : ::java::lang::Object(obj) {}

          void addNormsField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::NormsProducer &) const;
          void merge(const ::org::apache::lucene::index::MergeState &) const;
          void mergeNormsField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
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
        extern PyType_Def PY_TYPE_DEF(NormsConsumer);
        extern PyTypeObject *PY_TYPE(NormsConsumer);

        class t_NormsConsumer {
        public:
          PyObject_HEAD
          NormsConsumer object;
          static PyObject *wrap_Object(const NormsConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
