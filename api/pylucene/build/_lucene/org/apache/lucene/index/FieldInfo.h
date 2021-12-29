#ifndef org_apache_lucene_index_FieldInfo_H
#define org_apache_lucene_index_FieldInfo_H

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

        class FieldInfo : public ::java::lang::Object {
         public:
          enum {
            mid_init$_91434f1c9fde0fc9,
            mid_attributes_1c3426541413a55d,
            mid_checkConsistency_8454bd5aa23fd11e,
            mid_getAttribute_9bfa75c9f141b67f,
            mid_getDocValuesGen_2e5ae9edcb9b072f,
            mid_getDocValuesType_c31c90cd64c32335,
            mid_getIndexOptions_0d28536417711dd9,
            mid_getPointDimensionCount_9972fcc56b44e79d,
            mid_getPointIndexDimensionCount_9972fcc56b44e79d,
            mid_getPointNumBytes_9972fcc56b44e79d,
            mid_hasNorms_8454bd5aa23fd11e,
            mid_hasPayloads_8454bd5aa23fd11e,
            mid_hasVectors_8454bd5aa23fd11e,
            mid_isSoftDeletesField_8454bd5aa23fd11e,
            mid_omitsNorms_8454bd5aa23fd11e,
            mid_putAttribute_04b762e0ad33dcc5,
            mid_setDocValuesType_ed8de59f4ab7f4c5,
            mid_setIndexOptions_851d3281d7acb151,
            mid_setOmitsNorms_f2cc1bce94666404,
            mid_setPointDimensions_db3e97653d3683f3,
            max_mid
          };

          enum {
            fid_name,
            fid_number,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInfo(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInfo(const FieldInfo& obj) : ::java::lang::Object(obj) {}

          ::java::lang::String _get_name() const;
          jint _get_number() const;

          FieldInfo(const ::java::lang::String &, jint, jboolean, jboolean, jboolean, const ::org::apache::lucene::index::IndexOptions &, const ::org::apache::lucene::index::DocValuesType &, jlong, const ::java::util::Map &, jint, jint, jint, jboolean);

          ::java::util::Map attributes() const;
          jboolean checkConsistency() const;
          ::java::lang::String getAttribute(const ::java::lang::String &) const;
          jlong getDocValuesGen() const;
          ::org::apache::lucene::index::DocValuesType getDocValuesType() const;
          ::org::apache::lucene::index::IndexOptions getIndexOptions() const;
          jint getPointDimensionCount() const;
          jint getPointIndexDimensionCount() const;
          jint getPointNumBytes() const;
          jboolean hasNorms() const;
          jboolean hasPayloads() const;
          jboolean hasVectors() const;
          jboolean isSoftDeletesField() const;
          jboolean omitsNorms() const;
          ::java::lang::String putAttribute(const ::java::lang::String &, const ::java::lang::String &) const;
          void setDocValuesType(const ::org::apache::lucene::index::DocValuesType &) const;
          void setIndexOptions(const ::org::apache::lucene::index::IndexOptions &) const;
          void setOmitsNorms() const;
          void setPointDimensions(jint, jint, jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldInfo);
        extern PyTypeObject *PY_TYPE(FieldInfo);

        class t_FieldInfo {
        public:
          PyObject_HEAD
          FieldInfo object;
          static PyObject *wrap_Object(const FieldInfo&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
