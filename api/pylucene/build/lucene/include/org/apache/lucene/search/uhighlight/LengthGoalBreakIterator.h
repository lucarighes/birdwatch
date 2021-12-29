#ifndef org_apache_lucene_search_uhighlight_LengthGoalBreakIterator_H
#define org_apache_lucene_search_uhighlight_LengthGoalBreakIterator_H

#include "java/text/BreakIterator.h"

namespace java {
  namespace lang {
    class Class;
    class Object;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {
          class LengthGoalBreakIterator;
        }
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        namespace uhighlight {

          class LengthGoalBreakIterator : public ::java::text::BreakIterator {
           public:
            enum {
              mid_clone_d6bcd06f3102c4d9,
              mid_createClosestToLength_614ce20164853fca,
              mid_createClosestToLength_2c3f1773d854ab4a,
              mid_createMinLength_614ce20164853fca,
              mid_createMinLength_2c3f1773d854ab4a,
              mid_current_9972fcc56b44e79d,
              mid_first_9972fcc56b44e79d,
              mid_following_1e143afe1894d213,
              mid_isBoundary_a1d30e1ee40c89a2,
              mid_last_9972fcc56b44e79d,
              mid_next_9972fcc56b44e79d,
              mid_next_1e143afe1894d213,
              mid_preceding_1e143afe1894d213,
              mid_previous_9972fcc56b44e79d,
              mid_setText_9fd2eb66a64e6f0f,
              mid_toString_db9b55ba01e03e4b,
              max_mid
            };

            static ::java::lang::Class *class$;
            static jmethodID *mids$;
            static bool live$;
            static jclass initializeClass(bool);

            explicit LengthGoalBreakIterator(jobject obj) : ::java::text::BreakIterator(obj) {
              if (obj != NULL && mids$ == NULL)
                env->getClass(initializeClass);
            }
            LengthGoalBreakIterator(const LengthGoalBreakIterator& obj) : ::java::text::BreakIterator(obj) {}

            ::java::lang::Object clone() const;
            static LengthGoalBreakIterator createClosestToLength(const ::java::text::BreakIterator &, jint);
            static LengthGoalBreakIterator createClosestToLength(const ::java::text::BreakIterator &, jint, jfloat);
            static LengthGoalBreakIterator createMinLength(const ::java::text::BreakIterator &, jint);
            static LengthGoalBreakIterator createMinLength(const ::java::text::BreakIterator &, jint, jfloat);
            jint current() const;
            jint first() const;
            jint following(jint) const;
            jboolean isBoundary(jint) const;
            jint last() const;
            jint next() const;
            jint next(jint) const;
            jint preceding(jint) const;
            jint previous() const;
            void setText(const ::java::lang::String &) const;
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
        namespace uhighlight {
          extern PyType_Def PY_TYPE_DEF(LengthGoalBreakIterator);
          extern PyTypeObject *PY_TYPE(LengthGoalBreakIterator);

          class t_LengthGoalBreakIterator {
          public:
            PyObject_HEAD
            LengthGoalBreakIterator object;
            static PyObject *wrap_Object(const LengthGoalBreakIterator&);
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
