#ifndef org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H
#define org_apache_lucene_analysis_tokenattributes_CharTermAttribute_H

#include "org/apache/lucene/util/Attribute.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {
          class CharTermAttribute;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class CharSequence;
    class String;
    class Appendable;
    class StringBuilder;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace tokenattributes {

          class CharTermAttribute : public ::org::apache::lucene::util::Attribute {
           public:
            enum {
              mid_append_08b07ebb2001b248,
              mid_append_d85521f0e70da213,
              mid_append_b1f80b30aeff72d6,
              mid_append_20585f004b528d2a,
              mid_append_82412d869dba58e5,
              mid_append_be0c00cc88f7d758,
              mid_buffer_e11cf13c9a887534,
              mid_copyBuffer_d5128be76a214037,
              mid_resizeBuffer_4a35a620830b94db,
              mid_setEmpty_ef58197fb96ec4fc,
              mid_setLength_85969a49670f0d6d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharTermAttribute(jobject obj) : ::org::apache::lucene::util::Attribute(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharTermAttribute(const CharTermAttribute& obj) : ::org::apache::lucene::util::Attribute(obj) {}

            CharTermAttribute append(const ::java::lang::StringBuilder &) const;
            CharTermAttribute append(const ::java::lang::String &) const;
            CharTermAttribute append(jchar) const;
            CharTermAttribute append(const ::java::lang::CharSequence &) const;
            CharTermAttribute append(const CharTermAttribute &) const;
            CharTermAttribute append(const ::java::lang::CharSequence &, jint, jint) const;
            JArray< jchar > buffer() const;
            void copyBuffer(const JArray< jchar > &, jint, jint) const;
            JArray< jchar > resizeBuffer(jint) const;
            CharTermAttribute setEmpty() const;
            CharTermAttribute setLength(jint) const;
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
          extern PyType_Def PY_TYPE_DEF(CharTermAttribute);
          extern PyTypeObject *PY_TYPE(CharTermAttribute);

          class t_CharTermAttribute {
          public:
            PyObject_HEAD
            CharTermAttribute object;
            static PyObject *wrap_Object(const CharTermAttribute&);
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
