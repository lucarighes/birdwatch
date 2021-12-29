#ifndef org_apache_lucene_search_uhighlight_SplittingBreakIterator_H
#define org_apache_lucene_search_uhighlight_SplittingBreakIterator_H

#include "java/text/BreakIterator.h"

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
      namespace search {
        namespace uhighlight {

          class SplittingBreakIterator : public ::java::text::BreakIterator {
           public:
            enum {
              mid_init$_c0a8e9b07bc13463,
              mid_current_9972fcc56b44e79d,
              mid_first_9972fcc56b44e79d,
              mid_following_1e143afe1894d213,
              mid_last_9972fcc56b44e79d,
              mid_next_9972fcc56b44e79d,
              mid_next_1e143afe1894d213,
              mid_preceding_1e143afe1894d213,
              mid_previous_9972fcc56b44e79d,
              mid_setText_9fd2eb66a64e6f0f,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit SplittingBreakIterator(jobject obj) : ::java::text::BreakIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            SplittingBreakIterator(const SplittingBreakIterator& obj) : ::java::text::BreakIterator(obj) {}

            SplittingBreakIterator(const ::java::text::BreakIterator &, jchar);

            jint current() const;
            jint first() const;
            jint following(jint) const;
            jint last() const;
            jint next() const;
            jint next(jint) const;
            jint preceding(jint) const;
            jint previous() const;
            void setText(const ::java::lang::String &) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(SplittingBreakIterator);
          extern PyTypeObject *PY_TYPE(SplittingBreakIterator);

          class t_SplittingBreakIterator {
          public:
            PyObject_HEAD
            SplittingBreakIterator object;
            static PyObject *wrap_Object(const SplittingBreakIterator&);
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
