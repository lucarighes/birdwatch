#ifndef org_apache_lucene_search_uhighlight_WholeBreakIterator_H
#define org_apache_lucene_search_uhighlight_WholeBreakIterator_H

#include "java/text/BreakIterator.h"

namespace java {
  namespace lang {
    class Class;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class WholeBreakIterator : public ::java::text::BreakIterator {
           public:
            enum {
              mid_init$_f2cc1bce94666404,
              mid_current_9972fcc56b44e79d,
              mid_first_9972fcc56b44e79d,
              mid_following_1e143afe1894d213,
              mid_last_9972fcc56b44e79d,
              mid_next_9972fcc56b44e79d,
              mid_next_1e143afe1894d213,
              mid_preceding_1e143afe1894d213,
              mid_previous_9972fcc56b44e79d,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit WholeBreakIterator(jobject obj) : ::java::text::BreakIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            WholeBreakIterator(const WholeBreakIterator& obj) : ::java::text::BreakIterator(obj) {}

            WholeBreakIterator();

            jint current() const;
            jint first() const;
            jint following(jint) const;
            jint last() const;
            jint next() const;
            jint next(jint) const;
            jint preceding(jint) const;
            jint previous() const;
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
          extern PyType_Def PY_TYPE_DEF(WholeBreakIterator);
          extern PyTypeObject *PY_TYPE(WholeBreakIterator);

          class t_WholeBreakIterator {
          public:
            PyObject_HEAD
            WholeBreakIterator object;
            static PyObject *wrap_Object(const WholeBreakIterator&);
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
