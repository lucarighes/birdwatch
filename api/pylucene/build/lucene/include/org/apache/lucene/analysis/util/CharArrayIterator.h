#ifndef org_apache_lucene_analysis_util_CharArrayIterator_H
#define org_apache_lucene_analysis_util_CharArrayIterator_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {
          class CharArrayIterator;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        namespace util {

          class CharArrayIterator : public ::java::lang::Object {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_clone_3575480ce6b576fd,
              mid_current_8eea1dd85c3239c3,
              mid_first_8eea1dd85c3239c3,
              mid_getBeginIndex_9972fcc56b44e79d,
              mid_getEndIndex_9972fcc56b44e79d,
              mid_getIndex_9972fcc56b44e79d,
              mid_getLength_9972fcc56b44e79d,
              mid_getStart_9972fcc56b44e79d,
              mid_getText_e11cf13c9a887534,
              mid_last_8eea1dd85c3239c3,
              mid_newSentenceInstance_3575480ce6b576fd,
              mid_newWordInstance_3575480ce6b576fd,
              mid_next_8eea1dd85c3239c3,
              mid_previous_8eea1dd85c3239c3,
              mid_setIndex_ebc61ec1e57770d1,
              mid_setText_d5128be76a214037,
              mid_jreBugWorkaround_87303ccbf3475d77,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit CharArrayIterator(jobject obj) : ::java::lang::Object(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            CharArrayIterator(const CharArrayIterator& obj) : ::java::lang::Object(obj) {}

            static jboolean HAS_BUGGY_BREAKITERATORS;

            CharArrayIterator();

            CharArrayIterator clone() const;
            jchar current() const;
            jchar first() const;
            jint getBeginIndex() const;
            jint getEndIndex() const;
            jint getIndex() const;
            jint getLength() const;
            jint getStart() const;
            JArray< jchar > getText() const;
            jchar last() const;
            static CharArrayIterator newSentenceInstance();
            static CharArrayIterator newWordInstance();
            jchar next() const;
            jchar previous() const;
            jchar setIndex(jint) const;
            void setText(const JArray< jchar > &, jint, jint) const;
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
        namespace util {
          extern PyType_Def PY_TYPE_DEF(CharArrayIterator);
          extern PyTypeObject *PY_TYPE(CharArrayIterator);

          class t_CharArrayIterator {
          public:
            PyObject_HEAD
            CharArrayIterator object;
            static PyObject *wrap_Object(const CharArrayIterator&);
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
