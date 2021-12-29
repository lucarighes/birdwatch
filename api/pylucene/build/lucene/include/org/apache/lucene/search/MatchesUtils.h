#ifndef org_apache_lucene_search_MatchesUtils_H
#define org_apache_lucene_search_MatchesUtils_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace index {
        class LeafReaderContext;
      }
      namespace util {
        class BytesRefIterator;
        class IOSupplier;
      }
      namespace search {
        class MatchesIterator;
        class Query;
        class Matches;
      }
    }
  }
}
namespace java {
  namespace lang {
    class Class;
    class String;
  }
  namespace io {
    class IOException;
  }
  namespace util {
    class List;
  }
}
template<class T> class JArray;

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {

        class MatchesUtils : public ::java::lang::Object {
         public:
          enum {
            mid_disjunction_f8b56579bab6a63c,
            mid_disjunction_90c5de4858484da1,
            mid_forField_5cbeca2d6325c3dd,
            mid_fromSubMatches_3320272592407527,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MatchesUtils(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MatchesUtils(const MatchesUtils& obj) : ::java::lang::Object(obj) {}

          static ::org::apache::lucene::search::Matches *MATCH_WITH_NO_TERMS;

          static ::org::apache::lucene::search::MatchesIterator disjunction(const ::java::util::List &);
          static ::org::apache::lucene::search::MatchesIterator disjunction(const ::org::apache::lucene::index::LeafReaderContext &, jint, const ::org::apache::lucene::search::Query &, const ::java::lang::String &, const ::org::apache::lucene::util::BytesRefIterator &);
          static ::org::apache::lucene::search::Matches forField(const ::java::lang::String &, const ::org::apache::lucene::util::IOSupplier &);
          static ::org::apache::lucene::search::Matches fromSubMatches(const ::java::util::List &);
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
        extern PyType_Def PY_TYPE_DEF(MatchesUtils);
        extern PyTypeObject *PY_TYPE(MatchesUtils);

        class t_MatchesUtils {
        public:
          PyObject_HEAD
          MatchesUtils object;
          static PyObject *wrap_Object(const MatchesUtils&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
