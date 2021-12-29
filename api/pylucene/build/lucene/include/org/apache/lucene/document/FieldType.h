#ifndef org_apache_lucene_document_FieldType_H
#define org_apache_lucene_document_FieldType_H

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
        class IndexableFieldType;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace document {

        class FieldType : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_69d0830063c969b4,
            mid_docValuesType_c31c90cd64c32335,
            mid_equals_8b72f2dcdde6fd1d,
            mid_freeze_f2cc1bce94666404,
            mid_getAttributes_1c3426541413a55d,
            mid_hashCode_9972fcc56b44e79d,
            mid_indexOptions_0d28536417711dd9,
            mid_omitNorms_8454bd5aa23fd11e,
            mid_pointDimensionCount_9972fcc56b44e79d,
            mid_pointIndexDimensionCount_9972fcc56b44e79d,
            mid_pointNumBytes_9972fcc56b44e79d,
            mid_putAttribute_04b762e0ad33dcc5,
            mid_setDimensions_438c62480c481c65,
            mid_setDimensions_db3e97653d3683f3,
            mid_setDocValuesType_ed8de59f4ab7f4c5,
            mid_setIndexOptions_851d3281d7acb151,
            mid_setOmitNorms_9d72768e8fdce2b7,
            mid_setStoreTermVectorOffsets_9d72768e8fdce2b7,
            mid_setStoreTermVectorPayloads_9d72768e8fdce2b7,
            mid_setStoreTermVectorPositions_9d72768e8fdce2b7,
            mid_setStoreTermVectors_9d72768e8fdce2b7,
            mid_setStored_9d72768e8fdce2b7,
            mid_setTokenized_9d72768e8fdce2b7,
            mid_storeTermVectorOffsets_8454bd5aa23fd11e,
            mid_storeTermVectorPayloads_8454bd5aa23fd11e,
            mid_storeTermVectorPositions_8454bd5aa23fd11e,
            mid_storeTermVectors_8454bd5aa23fd11e,
            mid_stored_8454bd5aa23fd11e,
            mid_toString_db9b55ba01e03e4b,
            mid_tokenized_8454bd5aa23fd11e,
            mid_checkIfFrozen_f2cc1bce94666404,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldType(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldType(const FieldType& obj) : ::java::lang::Object(obj) {}

          FieldType();
          FieldType(const ::org::apache::lucene::index::IndexableFieldType &);

          ::org::apache::lucene::index::DocValuesType docValuesType() const;
          jboolean equals(const ::java::lang::Object &) const;
          void freeze() const;
          ::java::util::Map getAttributes() const;
          jint hashCode() const;
          ::org::apache::lucene::index::IndexOptions indexOptions() const;
          jboolean omitNorms() const;
          jint pointDimensionCount() const;
          jint pointIndexDimensionCount() const;
          jint pointNumBytes() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setDimensions(jint, jint) const;
          void setDimensions(jint, jint, jint) const;
          void setDocValuesType(const ::org::apache::lucene::index::DocValuesType &) const;
          void setIndexOptions(const ::org::apache::lucene::index::IndexOptions &) const;
          void setOmitNorms(jboolean) const;
          void setStoreTermVectorOffsets(jboolean) const;
          void setStoreTermVectorPayloads(jboolean) const;
          void setStoreTermVectorPositions(jboolean) const;
          void setStoreTermVectors(jboolean) const;
          void setStored(jboolean) const;
          void setTokenized(jboolean) const;
          jboolean storeTermVectorOffsets() const;
          jboolean storeTermVectorPayloads() const;
          jboolean storeTermVectorPositions() const;
          jboolean storeTermVectors() const;
          jboolean stored() const;
          ::java::lang::String toString() const;
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
      namespace document {
        extern PyType_Def PY_TYPE_DEF(FieldType);
        extern PyTypeObject *PY_TYPE(FieldType);

        class t_FieldType {
        public:
          PyObject_HEAD
          FieldType object;
          static PyObject *wrap_Object(const FieldType&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
