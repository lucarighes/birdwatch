#ifndef org_apache_lucene_index_FieldInvertState_H
#define org_apache_lucene_index_FieldInvertState_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class IndexOptions;
      }
      namespace util {
        class AttributeSource;
      }
    }
  }
}
namespace java {
  namespace lang {
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class FieldInvertState : public ::java::lang::Object {
         public:
          enum {
            mid_init$_fee80ae991552074,
            mid_init$_f51a33d28e843f25,
            mid_getAttributeSource_8fce18d62d0e145e,
            mid_getIndexCreatedVersionMajor_9972fcc56b44e79d,
            mid_getIndexOptions_0d28536417711dd9,
            mid_getLength_9972fcc56b44e79d,
            mid_getMaxTermFrequency_9972fcc56b44e79d,
            mid_getName_db9b55ba01e03e4b,
            mid_getNumOverlap_9972fcc56b44e79d,
            mid_getOffset_9972fcc56b44e79d,
            mid_getPosition_9972fcc56b44e79d,
            mid_getUniqueTermCount_9972fcc56b44e79d,
            mid_setLength_040c4cd0390c5aff,
            mid_setNumOverlap_040c4cd0390c5aff,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit FieldInvertState(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          FieldInvertState(const FieldInvertState& obj) : ::java::lang::Object(obj) {}

          FieldInvertState(jint, const ::java::lang::String &, const ::org::apache::lucene::index::IndexOptions &);
          FieldInvertState(jint, const ::java::lang::String &, const ::org::apache::lucene::index::IndexOptions &, jint, jint, jint, jint, jint, jint);

          ::org::apache::lucene::util::AttributeSource getAttributeSource() const;
          jint getIndexCreatedVersionMajor() const;
          ::org::apache::lucene::index::IndexOptions getIndexOptions() const;
          jint getLength() const;
          jint getMaxTermFrequency() const;
          ::java::lang::String getName() const;
          jint getNumOverlap() const;
          jint getOffset() const;
          jint getPosition() const;
          jint getUniqueTermCount() const;
          void setLength(jint) const;
          void setNumOverlap(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(FieldInvertState);
        extern PyTypeObject *PY_TYPE(FieldInvertState);

        class t_FieldInvertState {
        public:
          PyObject_HEAD
          FieldInvertState object;
          static PyObject *wrap_Object(const FieldInvertState&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
