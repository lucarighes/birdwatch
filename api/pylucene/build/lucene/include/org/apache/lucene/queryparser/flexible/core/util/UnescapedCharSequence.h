#ifndef org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H
#define org_apache_lucene_queryparser_flexible_core_util_UnescapedCharSequence_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class CharSequence;
    class String;
    class Class;
  }
  namespace util {
    class Locale;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {

              class UnescapedCharSequence : public ::java::lang::Object {
               public:
                enum {
                  mid_init$_4b7f5e38f806ae55,
                  mid_init$_76449b3702dee6c0,
                  mid_charAt_ebc61ec1e57770d1,
                  mid_length_9972fcc56b44e79d,
                  mid_subSequence_26d6f5be97bcdc38,
                  mid_toLowerCase_fff52ea63ae9cb82,
                  mid_toString_db9b55ba01e03e4b,
                  mid_toStringEscaped_db9b55ba01e03e4b,
                  mid_toStringEscaped_4082f27b3cc7d145,
                  mid_wasEscaped_a1d30e1ee40c89a2,
                  mid_wasEscaped_a6da2902d8147ed8,
                  max_mid
                };

                static ::java::lang::Class *class$;
                static jmethodID *mids$;
                static bool live$;
                static jclass initializeClass(bool);

                explicit UnescapedCharSequence(jobject obj) : ::java::lang::Object(obj) {
                  if (obj != NULL && mids$ == NULL)
                    env->getClass(initializeClass);
                }
                UnescapedCharSequence(const UnescapedCharSequence& obj) : ::java::lang::Object(obj) {}

                UnescapedCharSequence(const ::java::lang::CharSequence &);
                UnescapedCharSequence(const JArray< jchar > &, const JArray< jboolean > &, jint, jint);

                jchar charAt(jint) const;
                jint length() const;
                ::java::lang::CharSequence subSequence(jint, jint) const;
                static ::java::lang::CharSequence toLowerCase(const ::java::lang::CharSequence &, const ::java::util::Locale &);
                ::java::lang::String toString() const;
                ::java::lang::String toStringEscaped() const;
                ::java::lang::String toStringEscaped(const JArray< jchar > &) const;
                jboolean wasEscaped(jint) const;
                static jboolean wasEscaped(const ::java::lang::CharSequence &, jint);
              };
            }
          }
        }
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace queryparser {
        namespace flexible {
          namespace core {
            namespace util {
              extern PyType_Def PY_TYPE_DEF(UnescapedCharSequence);
              extern PyTypeObject *PY_TYPE(UnescapedCharSequence);

              class t_UnescapedCharSequence {
              public:
                PyObject_HEAD
                UnescapedCharSequence object;
                static PyObject *wrap_Object(const UnescapedCharSequence&);
                static PyObject *wrap_jobject(const jobject&);
                static void install(PyObject *module);
                static void initialize(PyObject *module);
              };
            }
          }
        }
      }
    }
  }
}

#endif
