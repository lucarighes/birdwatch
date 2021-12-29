#ifndef org_apache_lucene_search_TokenStreamToTermAutomatonQuery_H
#define org_apache_lucene_search_TokenStreamToTermAutomatonQuery_H

#include "java/lang/Object.h"

namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
}
namespace org {
  namespace apache {
    namespace lucene {
      namespace analysis {
        class TokenStream;
      }
      namespace search {
        class TermAutomatonQuery;
      }
    }
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class TokenStreamToTermAutomatonQuery : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_setPreservePositionIncrements_9d72768e8fdce2b7,
            mid_toQuery_24a751225fe3e84b,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit TokenStreamToTermAutomatonQuery(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          TokenStreamToTermAutomatonQuery(const TokenStreamToTermAutomatonQuery& obj) : ::java::lang::Object(obj) {}

          TokenStreamToTermAutomatonQuery();

          void setPreservePositionIncrements(jboolean) const;
          ::org::apache::lucene::search::TermAutomatonQuery toQuery(const ::java::lang::String &, const ::org::apache::lucene::analysis::TokenStream &) const;
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
        extern PyType_Def PY_TYPE_DEF(TokenStreamToTermAutomatonQuery);
        extern PyTypeObject *PY_TYPE(TokenStreamToTermAutomatonQuery);

        class t_TokenStreamToTermAutomatonQuery {
        public:
          PyObject_HEAD
          TokenStreamToTermAutomatonQuery object;
          static PyObject *wrap_Object(const TokenStreamToTermAutomatonQuery&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
