#ifndef org_apache_lucene_codecs_DocValuesConsumer_H
#define org_apache_lucene_codecs_DocValuesConsumer_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Number;
    class Class;
    class Iterable;
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
        class DocValuesProducer;
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

        class DocValuesConsumer : public ::java::lang::Object {
         public:
          enum {
            mid_addBinaryField_a3ba0999f60cc939,
            mid_addNumericField_a3ba0999f60cc939,
            mid_addSortedField_a3ba0999f60cc939,
            mid_addSortedNumericField_a3ba0999f60cc939,
            mid_addSortedSetField_a3ba0999f60cc939,
            mid_isSingleValued_105e8c4f434a40d1,
            mid_merge_747cb13f783c9b42,
            mid_mergeBinaryField_b32f9072de285d65,
            mid_mergeNumericField_b32f9072de285d65,
            mid_mergeSortedField_b32f9072de285d65,
            mid_mergeSortedNumericField_b32f9072de285d65,
            mid_mergeSortedSetField_b32f9072de285d65,
            mid_singletonView_434153c7ec861238,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit DocValuesConsumer(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          DocValuesConsumer(const DocValuesConsumer& obj) : ::java::lang::Object(obj) {}

          void addBinaryField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          void addNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          void addSortedField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          void addSortedNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          void addSortedSetField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::codecs::DocValuesProducer &) const;
          static jboolean isSingleValued(const ::java::lang::Iterable &);
          void merge(const ::org::apache::lucene::index::MergeState &) const;
          void mergeBinaryField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          void mergeNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          void mergeSortedField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          void mergeSortedNumericField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          void mergeSortedSetField(const ::org::apache::lucene::index::FieldInfo &, const ::org::apache::lucene::index::MergeState &) const;
          static ::java::lang::Iterable singletonView(const ::java::lang::Iterable &, const ::java::lang::Iterable &, const ::java::lang::Number &);
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
        extern PyType_Def PY_TYPE_DEF(DocValuesConsumer);
        extern PyTypeObject *PY_TYPE(DocValuesConsumer);

        class t_DocValuesConsumer {
        public:
          PyObject_HEAD
          DocValuesConsumer object;
          static PyObject *wrap_Object(const DocValuesConsumer&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
