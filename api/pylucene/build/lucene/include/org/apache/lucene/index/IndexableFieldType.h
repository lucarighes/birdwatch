#ifndef org_apache_lucene_index_IndexableFieldType_H
#define org_apache_lucene_index_IndexableFieldType_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Map;
  }
  namespace lang {
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class DocValuesType;
        class IndexOptions;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class IndexableFieldType : public ::java::lang::Object {
         public:
          enum {
            mid_docValuesType_c31c90cd64c32335,
            mid_getAttributes_1c3426541413a55d,
            mid_indexOptions_0d28536417711dd9,
            mid_omitNorms_8454bd5aa23fd11e,
            mid_pointDimensionCount_9972fcc56b44e79d,
            mid_pointIndexDimensionCount_9972fcc56b44e79d,
            mid_pointNumBytes_9972fcc56b44e79d,
            mid_storeTermVectorOffsets_8454bd5aa23fd11e,
            mid_storeTermVectorPayloads_8454bd5aa23fd11e,
            mid_storeTermVectorPositions_8454bd5aa23fd11e,
            mid_storeTermVectors_8454bd5aa23fd11e,
            mid_stored_8454bd5aa23fd11e,
            mid_tokenized_8454bd5aa23fd11e,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit IndexableFieldType(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          IndexableFieldType(const IndexableFieldType& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::index::DocValuesType docValuesType() const;
          ::java::util::Map getAttributes() const;
          ::org::apache::lucene::index::IndexOptions indexOptions() const;
          jboolean omitNorms() const;
          jint pointDimensionCount() const;
          jint pointIndexDimensionCount() const;
          jint pointNumBytes() const;
          jboolean storeTermVectorOffsets() const;
          jboolean storeTermVectorPayloads() const;
          jboolean storeTermVectorPositions() const;
          jboolean storeTermVectors() const;
          jboolean stored() const;
          jboolean tokenized() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(IndexableFieldType);
        extern PyTypeObject *PY_TYPE(IndexableFieldType);

        class t_IndexableFieldType {
        public:
          PyObject_HEAD
          IndexableFieldType object;
          static PyObject *wrap_Object(const IndexableFieldType&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
