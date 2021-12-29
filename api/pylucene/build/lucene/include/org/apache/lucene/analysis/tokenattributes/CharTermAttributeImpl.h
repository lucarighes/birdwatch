#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttributeImpl_H

#include "org/apache/lucene/util/AttributeImpl.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
          class TermToBytesRefAttribute;
          class CharTermAttributeImpl;
        }
      }
      namespace util {
        class BytesRef;
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
    class CharSequence;
    class StringBuilder;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class CharTermAttributeImpl : public ::org::apache::lucene::util::AttributeImpl {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_append_08b07ebb2001b248,
              mid_append_d85521f0e70da213,
              mid_append_b1f80b30aeff72d6,
              mid_append_20585f004b528d2a,
              mid_append_82412d869dba58e5,
              mid_append_be0c00cc88f7d758,
              mid_buffer_e11cf13c9a887534,
              mid_charAt_ebc61ec1e57770d1,
              mid_clear_f2cc1bce94666404,
              mid_clone_69b6f7d483ff3ab1,
              mid_copyBuffer_d5128be76a214037,
              mid_copyTo_26346c38ebc9c090,
              mid_equals_8b72f2dcdde6fd1d,
              mid_getBytesRef_7af2ea2e37ce82b8,
              mid_hashCode_9972fcc56b44e79d,
              mid_length_9972fcc56b44e79d,
              mid_reflectWith_b880c72ee67200af,
              mid_resizeBuffer_4a35a620830b94db,
              mid_setEmpty_ef58197fb96ec4fc,
              mid_setLength_85969a49670f0d6d,
              mid_subSequence_26d6f5be97bcdc38,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTermAttributeImpl(jobject obj) : ::org::apache::lucene::util::AttributeImpl(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharTermAttributeImpl(const CharTermAttributeImpl& obj) : ::org::apache::lucene::util::AttributeImpl(obj) {}

            CharTermAttributeImpl();

            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::StringBuilder &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::String &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(jchar) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::CharSequence &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute &) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute append(const ::java::lang::CharSequence &, jint, jint) const;
            JArray< jchar > buffer() const;
            jchar charAt(jint) const;
            void clear() const;
            CharTermAttributeImpl clone() const;
            void copyBuffer(const JArray< jchar > &, jint, jint) const;
            void copyTo(const ::org::apache::lucene::util::AttributeImpl &) const;
            jboolean equals(const ::java::lang::Object &) const;
            ::org::apache::lucene::util::BytesRef getBytesRef() const;
            jint hashCode() const;
            jint length() const;
            void reflectWith(const ::org::apache::lucene::util::AttributeReflector &) const;
            JArray< jchar > resizeBuffer(jint) const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute setEmpty() const;
            ::org::apache::lucene::analysis::tokenattributes::CharTermAttribute setLength(jint) const;
            ::java::lang::CharSequence subSequence(jint, jint) const;
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
      namespace analysis {
        namespace tokenattributes {
          extern PyType_Def PY_TYPE_DEF(CharTermAttributeImpl);
          extern PyTypeObject *PY_TYPE(CharTermAttributeImpl);

          class t_CharTermAttributeImpl {
          public:
            PyObject_HEAD
            CharTermAttributeImpl object;
            static PyObject *wrap_Object(const CharTermAttributeImpl&);
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
