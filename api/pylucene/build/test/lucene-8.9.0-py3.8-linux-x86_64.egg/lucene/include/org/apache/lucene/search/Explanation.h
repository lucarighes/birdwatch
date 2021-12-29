#ifndef org_apache_lucene_search_Explanation_H
#define org_apache_lucene_search_Explanation_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace lang {
    class Number;
    class Class;
    class String;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Explanation;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Explanation : public ::java::lang::Object {
         public:
          enum {
            mid_equals_8b72f2dcdde6fd1d,
            mid_getDescription_db9b55ba01e03e4b,
            mid_getDetails_0069f1359571a33c,
            mid_getValue_f5813404cc5e3a1e,
            mid_hashCode_9972fcc56b44e79d,
            mid_isMatch_8454bd5aa23fd11e,
            mid_match_b8e38410dce1c8d3,
            mid_match_ac24b643682e4dd1,
            mid_noMatch_dfb47504cde8eab2,
            mid_noMatch_9c311f4287b19793,
            mid_toString_db9b55ba01e03e4b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Explanation(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Explanation(const Explanation& obj) : ::java::lang::Object(obj) {}

          jboolean equals(const ::java::lang::Object &) const;
          ::java::lang::String getDescription() const;
          JArray< Explanation > getDetails() const;
          ::java::lang::Number getValue() const;
          jint hashCode() const;
          jboolean isMatch() const;
          static Explanation match(const ::java::lang::Number &, const ::java::lang::String &, const JArray< Explanation > &);
          static Explanation match(const ::java::lang::Number &, const ::java::lang::String &, const ::java::util::Collection &);
          static Explanation noMatch(const ::java::lang::String &, const JArray< Explanation > &);
          static Explanation noMatch(const ::java::lang::String &, const ::java::util::Collection &);
          ::java::lang::String toString() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        extern PyType_Def PY_TYPE_DEF(Explanation);
        extern PyTypeObject *PY_TYPE(Explanation);

        class t_Explanation {
        public:
          PyObject_HEAD
          Explanation object;
          static PyObject *wrap_Object(const Explanation&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
