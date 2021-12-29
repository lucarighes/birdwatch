#ifndef org_apache_lucene_search_highlight_TextFragment_H
#define org_apache_lucene_search_highlight_TextFragment_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {
          class TextFragment;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class CharSequence;
    class String;
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace highlight {

          class TextFragment : public ::java::lang::Object {
           public:
            enum {
              mid_init$_1a9fff4dae4e12f0,
              mid_follows_e9b4754521c60f4b,
              mid_getFragNum_9972fcc56b44e79d,
              mid_getScore_58aec2b64dff50c8,
              mid_merge_786a99056c1d5c74,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit TextFragment(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            TextFragment(const TextFragment& obj) : ::java::lang::Object(obj) {}

            TextFragment(const ::java::lang::CharSequence &, jint, jint);

            jboolean follows(const TextFragment &) const;
            jint getFragNum() const;
            jfloat getScore() const;
            void merge(const TextFragment &) const;
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
      namespace search {
        namespace highlight {
          extern PyType_Def PY_TYPE_DEF(TextFragment);
          extern PyTypeObject *PY_TYPE(TextFragment);

          class t_TextFragment {
          public:
            PyObject_HEAD
            TextFragment object;
            static PyObject *wrap_Object(const TextFragment&);
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
