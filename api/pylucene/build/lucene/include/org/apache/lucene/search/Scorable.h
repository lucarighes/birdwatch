#ifndef org_apache_lucene_search_Scorable_H
#define org_apache_lucene_search_Scorable_H

#include "java/lang/Object.h"

namespace java {
  namespace util {
    class Collection;
  }
  namespace io {
    class IOException;
  }
  namespace lang {
    class Class;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable$ChildScorable;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class Scorable : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_docID_9972fcc56b44e79d,
            mid_getChildren_d4dfbf7a26ff41df,
            mid_score_58aec2b64dff50c8,
            mid_setMinCompetitiveScore_8e1d952dd65cdc3a,
            mid_smoothingScore_384f078ef4b8f931,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Scorable(const Scorable& obj) : ::java::lang::Object(obj) {}

          Scorable();

          jint docID() const;
          ::java::util::Collection getChildren() const;
          jfloat score() const;
          void setMinCompetitiveScore(jfloat) const;
          jfloat smoothingScore(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(Scorable);
        extern PyTypeObject *PY_TYPE(Scorable);

        class t_Scorable {
        public:
          PyObject_HEAD
          Scorable object;
          static PyObject *wrap_Object(const Scorable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
