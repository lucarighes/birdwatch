#ifndef org_apache_lucene_index_ExitableDirectoryReader$ExitableTerms_H
#define org_apache_lucene_index_ExitableDirectoryReader$ExitableTerms_H

#include "org/apache/lucene/index/FilterLeafReader$FilterTerms.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class Terms;
        class LeafReader;
        class QueryTimeout;
        class TermsEnum;
      }
      namespace util {
        class BytesRef;
        namespace automaton {
          class CompiledAutomaton;
        }
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
  }
  namespace io {
    class IOException;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {

        class ExitableDirectoryReader$ExitableTerms : public ::org::apache::lucene::index::FilterLeafReader$FilterTerms {
         public:
          enum {
            mid_init$_1a6b9c31362293ed,
            mid_intersect_20ab83ddd033f0a8,
            mid_iterator_3f9a21827903a65f,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit ExitableDirectoryReader$ExitableTerms(jobject obj) : ::org::apache::lucene::index::FilterLeafReader$FilterTerms(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          ExitableDirectoryReader$ExitableTerms(const ExitableDirectoryReader$ExitableTerms& obj) : ::org::apache::lucene::index::FilterLeafReader$FilterTerms(obj) {}

          ExitableDirectoryReader$ExitableTerms(const ::org::apache::lucene::index::Terms &, const ::org::apache::lucene::index::QueryTimeout &);

          ::org::apache::lucene::index::TermsEnum intersect(const ::org::apache::lucene::util::automaton::CompiledAutomaton &, const ::org::apache::lucene::util::BytesRef &) const;
          ::org::apache::lucene::index::TermsEnum iterator() const;
        };
      }
    }
  }
}

#include <Python.h>

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        extern PyType_Def PY_TYPE_DEF(ExitableDirectoryReader$ExitableTerms);
        extern PyTypeObject *PY_TYPE(ExitableDirectoryReader$ExitableTerms);

        class t_ExitableDirectoryReader$ExitableTerms {
        public:
          PyObject_HEAD
          ExitableDirectoryReader$ExitableTerms object;
          PyTypeObject *parameters[1];
          static PyTypeObject **parameters_(t_ExitableDirectoryReader$ExitableTerms *self)
          {
            return (PyTypeObject **) &(self->parameters);
          }
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableTerms&);
          static PyObject *wrap_jobject(const jobject&);
          static PyObject *wrap_Object(const ExitableDirectoryReader$ExitableTerms&, PyTypeObject *);
          static PyObject *wrap_jobject(const jobject&, PyTypeObject *);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
