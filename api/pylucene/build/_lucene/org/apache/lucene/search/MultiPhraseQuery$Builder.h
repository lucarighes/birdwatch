#ifndef org_apache_lucene_search_MultiPhraseQuery$Builder_H
#define org_apache_lucene_search_MultiPhraseQuery$Builder_H

#include "java/lang/Object.h"

namespace org {
  namespace apache {
    namespace lucene {
      namespace search {
        class MultiPhraseQuery$Builder;
        class MultiPhraseQuery;
      }
      namespace index {
        class Term;
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
      namespace search {

        class MultiPhraseQuery$Builder : public ::java::lang::Object {
         public:
          enum {
            mid_init$_f2cc1bce94666404,
            mid_init$_2c3dc05defe51ed9,
            mid_add_89a0ab165d049f48,
            mid_add_820acf80f3dba827,
            mid_add_c96bcfad5914236c,
            mid_build_b664e1331a96d42c,
            mid_setSlop_3d9685074af57454,
            max_mid
          };

          static ::java::lang::Class *class$;
          static jmethodID *mids$;
          static bool live$;
          static jclass initializeClass(bool);

          explicit MultiPhraseQuery$Builder(jobject obj) : ::java::lang::Object(obj) {
            if (obj != NULL && mids$ == NULL)
              env->getClass(initializeClass);
          }
          MultiPhraseQuery$Builder(const MultiPhraseQuery$Builder& obj) : ::java::lang::Object(obj) {}

          MultiPhraseQuery$Builder();
          MultiPhraseQuery$Builder(const ::org::apache::lucene::search::MultiPhraseQuery &);

          MultiPhraseQuery$Builder add(const JArray< ::org::apache::lucene::index::Term > &) const;
          MultiPhraseQuery$Builder add(const ::org::apache::lucene::index::Term &) const;
          MultiPhraseQuery$Builder add(const JArray< ::org::apache::lucene::index::Term > &, jint) const;
          ::org::apache::lucene::search::MultiPhraseQuery build() const;
          MultiPhraseQuery$Builder setSlop(jint) const;
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
        extern PyType_Def PY_TYPE_DEF(MultiPhraseQuery$Builder);
        extern PyTypeObject *PY_TYPE(MultiPhraseQuery$Builder);

        class t_MultiPhraseQuery$Builder {
        public:
          PyObject_HEAD
          MultiPhraseQuery$Builder object;
          static PyObject *wrap_Object(const MultiPhraseQuery$Builder&);
          static PyObject *wrap_jobject(const jobject&);
          static void install(PyObject *module);
          static void initialize(PyObject *module);
        };
      }
    }
  }
}

#endif
