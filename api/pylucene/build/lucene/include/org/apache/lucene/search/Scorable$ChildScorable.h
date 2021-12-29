#ifndef org_apache_lucene_search_Scorable$ChildScorable_H
#define org_apache_lucene_search_Scorable$ChildScorable_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class Scorable;
      }
    }
  }
}
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

        class Scorable$ChildScorable : public ::java::lang::Object {
         public:
          enum {
            mid_init$_82146d7bbeb51f42,
            max_mid
          };

          enum {
            fid_child,
            fid_relationship,
            max_fid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static jfieldID *fids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit Scorable$ChildScorable(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          Scorable$ChildScorable(const Scorable$ChildScorable& obj) : ::java::lang::Object(obj) {}

          ::org::apache::lucene::search::Scorable _get_child() const;
          ::java::lang::String _get_relationship() const;

          Scorable$ChildScorable(const ::org::apache::lucene::search::Scorable &, const ::java::lang::String &);
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
        extern PyType_Def PY_TYPE_DEF(Scorable$ChildScorable);
        extern PyTypeObject *PY_TYPE(Scorable$ChildScorable);

        class t_Scorable$ChildScorable {
        public:
          PyObject_HEAD
          Scorable$ChildScorable object;
          static PyObject *wrap_Object(const Scorable$ChildScorable&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
