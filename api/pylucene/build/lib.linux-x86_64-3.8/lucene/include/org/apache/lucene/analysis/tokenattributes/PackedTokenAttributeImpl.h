#ifndef org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_PackedTokenAttributeImpl_H

#include "org/apache/lucene/analysis/tokenattributes/CharTermAttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class PackedTokenAttributeImpl;
          class PositionIncrementAttribute;
          class PositionLengthAttribute;
          class OffsetAttribute;
          class TypeAttribute;
          class TermFrequencyAttribute;
        }
      }
      namespace util {
        class AttributeImpl;
        class AttributeReflector;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class PackedTokenAttributeImpl : public ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_clear_f2cc1bce94666404,
              mid_clone_f8c0f74c939507d4,
              mid_copyTo_26346c38ebc9c090,
              mid_end_f2cc1bce94666404,
              mid_endOffset_9972fcc56b44e79d,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getPositionIncrement_9972fcc56b44e79d,
              mid_getPositionLength_9972fcc56b44e79d,
              mid_getTermFrequency_9972fcc56b44e79d,
              mid_hashCode_9972fcc56b44e79d,
              mid_reflectWith_b880c72ee67200af,
              mid_setOffset_438c62480c481c65,
              mid_setPositionIncrement_040c4cd0390c5aff,
              mid_setPositionLength_040c4cd0390c5aff,
              mid_setTermFrequency_040c4cd0390c5aff,
              mid_setType_9fd2eb66a64e6f0f,
              mid_startOffset_9972fcc56b44e79d,
              mid_type_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit PackedTokenAttributeImpl(jobject obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            PackedTokenAttributeImpl(const PackedTokenAttributeImpl& obj) : ::org::apache::lucene::analysis::tokenattributes::CharTermAttributeImpl(obj) {}

            PackedTokenAttributeImpl();

            void clear() const;
            PackedTokenAttributeImpl clone() const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            void end() const;
            jint endOffset() const;
            jboolean equals(const ::java::lang::Object &) const;
            jint getPositionIncrement() const;
            jint getPositionLength() const;
            jint getTermFrequency() const;
            jint hashCode() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            void setOffset(jint, jint) const;
            void setPositionIncrement(jint) const;
            void setPositionLength(jint) const;
            void setTermFrequency(jint) const;
            void setType(const ::java::lang::String &) const;
            jint startOffset() const;
            ::java::lang::String type() const;
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
      namespace analysis {
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(PackedTokenAttributeImpl);
          extern PyTypeObject *PY_TYPE(PackedTokenAttributeImpl);

          class t_PackedTokenAttributeImpl {
          public:
            PyObject_HEAD
            PackedTokenAttributeImpl object;
            static PyObject *wrap_Object(const PackedTokenAttributeImpl&);
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
